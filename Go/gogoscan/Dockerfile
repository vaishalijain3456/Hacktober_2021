FROM golang:1.16-alpine AS build

WORKDIR /go/src/app
ADD . /go/src/app

RUN go get -d -v ./...

RUN go build -o /go/bin/app

FROM alpine

RUN apk update
RUN apk add nmap
RUN rm -rf /var/cache/apk/*

COPY --from=build /go/bin/app /

CMD ["/app"]