// ==UserScript==
// @name         ecp_autoscript
// @require      http://servercontrol.dcnn.ru/static/main/js/jquery.js
// @namespace    http://servercontrol.dcnn.ru/
// @version      0.1.1
// @description  try to take over the world!
// @author       You
// @match        https://ecp.mznn.ru/?c=promed
// @grant        none
// ==/UserScript==
/* globals jQuery, $, waitForKeyElements */

(function() {
    $("body").before("<div id='newitem'>test</div><div id='newitem1'></div");
    $("#newitem").css({
        "position": "relative",
        "top": "31px",
        "left": "70%",
        "z-index": "20",
        "height": "26px",
        "cursor": "pointer",
        "color": "white",
        "padding-top": "10px",
        "background": "#1E88E5  !important",
        "border-bottom": "4px solid #FFE0B2 !important",
    });
    $("#newitem1").css({
        "position": "relative",
        "width": "40px",
        "height": "40px",
        "cursor": "pointer",
        "left": "calc(100% - 380px)",
        "display": "block",
        "z-index": "999999999999",
        "top": "31px"
    });
    $("#swmessagebox-1001").ready(function(){
        $("#swmessagebox-1001-bodyWrap").find("#button-1006-btnWrap").trigger("click");
    });
    $("#newitem").html("Автозаполнение");
    //$("#swDiagCombo-1853-picker").find("li").click(function(){
    $("#newitem1").click(function(){
        $("#button-1561-btnWrap").trigger("click");
        var i = 1;
        var counter = 0;
        function lo(){
            setTimeout(function(){
                //console.log($("#swmessagebox-1001-bodyWrap").length);
                if($("#swmessagebox-1001-bodyWrap").length > 0){
                    if(counter < 2){
                        $("#swmessagebox-1001-bodyWrap").find("#button-1006-btnWrap").trigger("click");
                        counter++;
                    };
                };
                i++;
                if(i < 4) {
                    lo();
                };
            }, 500);
        };
        lo();
        //$("#swmessagebox-1001-bodyWrap").find("#button-1006-btnWrap").trigger("click");
    });
    $("#newitem").click(function(){
        //alert("test");
        //alert($(this).text());
        //if($("this").text()=="Z01.8 Другое уточненное специальное обследование"){alert("kek")}
        $("#ext-element-5").css({"width":"80%"});
        $("#commonSprCombo-1831-trigger-picker").trigger("click");
        $("#commonSprCombo-1831-picker").find("li.x6-boundlist-item:nth-child(1)").trigger("click");

        $("#commonSprCombo-1833-trigger-picker").trigger("click");
        $("#commonSprCombo-1833-picker").find("li.x6-boundlist-item:nth-child(1)").trigger("click");

        $("#swVizitTypeCombo-1835-trigger-picker").trigger("click");
        $("#swVizitTypeCombo-1835-picker").find("li.x6-boundlist-item:nth-child(1)").trigger("click");

        $("#swDiagSetPhaseCombo-1892-trigger-picker").trigger("click");
        $("#swDiagSetPhaseCombo-1892-picker-listWrap").find("li.x6-boundlist-item:nth-child(1)").trigger("click");


        //$("#ext-element-7").after("<div class='newclass'>ПИСЯ</div>");
        //$(".newclass").css({"display": "inline-block"});
    });
     //   });
    //}
})();
