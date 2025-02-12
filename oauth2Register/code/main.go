package main

import (
	"log"
	"net/http"

	"oauth2Register/data"
	"oauth2Register/data/config"

	"github.com/xxjwxc/public/server"
)

func CallBack() {
	var apiroot data.ApiRoot
	apiroot.OnCreat()
	log.Println("OAuth2 register is running at " + config.GetServerPort() + " port.")
	log.Fatal(http.ListenAndServe(":"+config.GetServerPort(), nil))
}

func main() {
	if config.OnIsDev() {
		CallBack()
	} else {
		server.On(config.GetServiceConfig()).Start(CallBack)
	}
}
