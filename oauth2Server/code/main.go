package main

import (
	"log"
	"net/http"
	"time"

	"oauth2Server/data"
	"oauth2Server/data/config"
	"oauth2Server/data/view/timecallback"

	"github.com/xxjwxc/oauth2/def/mysign"
	"github.com/xxjwxc/public/server"
	"github.com/xxjwxc/public/timerDeal"
)

func CallBack() {
	//设置时间回调
	var tcb timerDeal.TimerDeal
	tcb.AddOneCall(timecallback.OnTimeCallBackToken)
	tcb.SetCallBackTimer(24 * time.Hour)
	tcb.OnSart()
	//---------------------end

	var apiroot data.ApiRoot
	apiroot.OnCreat()
	log.Println("OAuth2 server is running at " + config.GetServerPort() + " port.")
	log.Fatal(http.ListenAndServe(":"+config.GetServerPort(), nil))
}

func main() {
	mysign.SetDburl(config.GetDbUrl())
	if config.OnIsDev() {
		CallBack()
	} else {
		server.On(config.GetServiceConfig()).Start(CallBack)
	}
}
