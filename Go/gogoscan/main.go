package main

import (
	"encoding/json"
	"fmt"
	"github.com/ArcaneDiver/gogoscan/scan"
	"log"
	"net/http"
	"os"
)

var scanner = scan.NewScanner()
func main() {
	if !scanner.CheckIfNmapExists() {
		log.Fatal("Nmap not found, it is required to be in PATH")
	}

	http.HandleFunc("/scan", ScanHandler)

	port, ok := os.LookupEnv("PORT")
	if !ok {
		port = "8080"
	}

	log.Println(fmt.Sprintf("Listening on :%s", port))
	log.Fatal(http.ListenAndServe(fmt.Sprintf(":%s", port), nil))
}

type MissingQueryParamsError struct {
	Message string `json:"message"`
}

func handleInternalErr(w http.ResponseWriter, err error) {
	w.WriteHeader(http.StatusInternalServerError)
	w.Write([]byte(err.Error()))
}

func ScanHandler(w http.ResponseWriter, r *http.Request) {
	host, port := r.URL.Query().Get("host"), r.URL.Query().Get("port")
	if host == "" || port == "" {
		res, err := json.Marshal(&MissingQueryParamsError{
			Message: "host or port is missing",
		})
		if err != nil {
			handleInternalErr(w, err)

			return
		}

		w.WriteHeader(http.StatusBadRequest)
		w.Write(res)

		return
	}

	result, err := scanner.Scan(host, port)
	if err != nil {
		handleInternalErr(w, err)

		return
	}

	response, err := json.Marshal(result)
	w.WriteHeader(http.StatusOK)
	w.Write(response)
}