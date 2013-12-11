// import QtQuick 1.0 // to target S60 5th Edition or Maemo 5
import QtQuick 1.1
Image {
    id: rabbit
    source: "int/combat/rabbit.png"
    Rectangle{
        id: rectangle
        height: 50
        width: 220
        x: 300
        y: 250
        color: "white"
    }
    Text {
        id: text
        text: "Я опаздываю!!"
        x: 300
        y: 250
        color: "#888000"
        font.pointSize: 20;
        font.bold: true
    }
    states:[
        State{
            name: '2'
            when: game.cQueue1 === 2
            PropertyChanges { target: rectangle;  opacity: 0.75}
            PropertyChanges { target: text;  opacity: 1}
        },
        State{
            name: '1'
            when: game.cQueue1 === 1
            PropertyChanges { target: rectangle;  opacity: 0}
            PropertyChanges { target: text;  opacity: 0}
        },
        State{
            name: '3'
            when: game.cQueue1 === 3
            PropertyChanges { target: rectangle;  opacity: 0}
            PropertyChanges { target: text;  opacity: 0}
        }
    ]
    SparkOnMob{}
}
