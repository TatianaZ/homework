// import QtQuick 1.0 // to target S60 5th Edition or Maemo 5
import QtQuick 1.1

Item{
    id:conv
    property int stConv: 0
    Image{
        source: "int/conversation.png"
    }
    Text{
        id: textStart
        x: 60
        y: 500
        color: "#888000"
        font.pointSize: 13;
        font.bold: true
        text: "Денежный горшочек!\n Пвп или боишься?"
    }
    Rectangle{
        id: choice1
        x: 300
        y: 500
        width: 300
        height: 30
        color: "black"
        opacity: 0
        Text{
            id: choice1Text
            color: "#888000"
            font.pointSize: 12;
            font.bold: true
            opacity: 0
            text: "Сражаться"
        }
        MouseArea{
            anchors.fill: parent;
            onClicked: {
                stConv = 2
                conv.state = 2
            }
        }
    }
    Rectangle{
        id: choice2
        x: 300
        y: 550
        width: 300
        height: 30
        color: "black"
        opacity: 0
        Text{
            id: choice2Text
            color: "#888000"
            font.pointSize: 12;
            font.bold: true
            opacity: 0
            text: "Кинуть десяток монет и сбежать"
        }
        MouseArea{
            anchors.fill: parent;
            onClicked: {
                background.source = "Map.qml"
            }
        }
    }
    Rectangle{
        id: fon
        height: 600
        width: 800
        color: "black"
        opacity: 0
        Text{
            id: fonText
            color: "#888000"
            x: 350
            y: 300
            font.pointSize: 20;
            font.bold: true
            opacity: 0
            text: "Вас убили с одной тычки.."
        }
    }
    states: [
        State{
            name: "0"
            when: stConv === 0
            PropertyChanges{target: textStart; opacity: 1}
            PropertyChanges{target: choice1; opacity: 0}
            PropertyChanges{target: choice1Text; opacity: 0}
            PropertyChanges{target: choice2; opacity: 0}
            PropertyChanges{target: fon; opacity: 0}
            PropertyChanges{target: fonText; opacity: 0}
        },
        State{
            name: "1"
            when: stConv === 1
            PropertyChanges{target: textStart; opacity: 1}
            PropertyChanges{target: choice1; opacity: 1}
            PropertyChanges{target: choice1Text; opacity: 1}
            PropertyChanges{target: choice2Text; opacity: 1}
            PropertyChanges{target: choice2; opacity: 1}
            PropertyChanges{target: fon; opacity: 0}
            PropertyChanges{target: fonText; opacity: 0}
        },
        State{
            name: "2"
            when: stConv === 2
            PropertyChanges{target: textStart; opacity: 0}
            PropertyChanges{target: choice1; opacity: 0}
            PropertyChanges{target: choice1Text; opacity: 0}
            PropertyChanges{target: choice2Text; opacity: 0}
            PropertyChanges{target: choice2; opacity: 0}
            PropertyChanges{target: fon; opacity: 0.85}
            PropertyChanges{target: fonText; opacity: 1}
        }
    ]
    transitions: Transition {
        SequentialAnimation {

            PropertyAnimation {
               properties: "opacity";
               easing.type: Easing.InOutQuad
            }
            PauseAnimation {
                duration: 1000
            }
            ScriptAction {
                script: {
                     if (stConv === 2){
                         background.source = "Lose.qml"
                     }
                     if (stConv === 0)
                     {
                         stConv++;
                     }
                    }
                }
        }
    }

}
