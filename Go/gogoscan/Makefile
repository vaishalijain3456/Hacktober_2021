HEROKU_APP=gogoscan

run:
	go run main.go

build:
	go build -o bin/main main.go

push-image:
	heroku container:push -a $(HEROKU_APP) web

deploy-image:
	heroku container:release -a $(HEROKU_APP) web