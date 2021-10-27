package scan

type Result struct {
	Host bool `json:"host"`
	Port string `json:"port"`
}