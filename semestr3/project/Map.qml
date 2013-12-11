import QtQuick 1.1

Rectangle {
    id : mainW;
    color: "#938292"
    Grid {
        x: 60
        y: 60
        columns: 3;
        Map0_0{} Map0_1{} Map0_2{}
        Map1_0{} Map1_1{} Map1_2{}
        Map2_0{} Map2_1{} Map2_2{}
    }

    Image{
        source: "int/interf.png"
    }
    Image{
        source: "int/hero1.png"
        x:580;
        y: 80;
    }
    Text {
        id:textMap
        text: "Nothing"
        y: 500;
        x: 70;
        font.pointSize: 18;
        font.bold: true
        color: "#888000"
    }
    Image{
        id: clover
        source: "int/clover.png"
        y: 480
        x: 480
    }
    Text
    {
        y: 540
        x: 500
        text: game.clover
        color: "#888000"
        font.pointSize: 20;
        font.bold: true
    }
    Image{
        id: gold
        source: "int/gold.png"
        y: 470
        x: 540

    }
    Text
    {
        id: textGold
        y: 540
        x: 560
        text: game.gold
        color: "#888000"
        font.pointSize: 20;
        font.bold: true
    }
    Image{
        id: compas
        source: "int/compas_2.png"
        x: 600
        Rectangle{//up
            id: st
            height: 50
            width: 50
            color: "#000000"
            x: 70
            y: 420
            opacity: 0.01
            MouseArea{
                anchors.fill: parent
                onClicked: {
                    compas.source = "int/compas_2.png"
                    game.goDown();
                }
            }
        }//left
        Rectangle{
            height: 50
            width: 50
            color: "#000000"
            x: 20
            y: 460
            opacity: 0.01
            MouseArea{
                anchors.fill: parent
                onClicked: {
                    compas.source = "int/compas_5.png"
                    game.goLeft();
                }
            }
        }
        Rectangle{//right
            height: 50
            width: 50
            color: "#000000"
            x: 120
            y: 460
            opacity: 0.01
            MouseArea{
                anchors.fill: parent
                onClicked: {
                    compas.source = "int/compas_3.png"
                    game.goRight();
                }
            }
        }//down
        Rectangle{
            height: 50
            width: 50
            color: "#000000"
            x: 70
            y: 520
            opacity: 0.01
            MouseArea{
                anchors.fill: parent
                onClicked: {
                    compas.source = "int/compas_4.png"
                    game.goUp();
                }
            }
        }
    }
    Rectangle{
        height: 30
        width: 100
        color: "#000000"
        x: 700
        y: 0
        opacity: 1
        MouseArea{
            anchors.fill: parent
            onClicked: {
                background.source = "MainMenu.qml"
            }
        }
        Text{
            text: "Exit"
            font.pointSize: 18;
            font.bold: true
            color: "#888000"
        }
    }

}
