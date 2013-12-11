// import QtQuick 1.0 // to target S60 5th Edition or Maemo 5
import QtQuick 1.1

Item{
    Image {
        source: "int/main.png"
    }
    Image {
        x:580;
        y: 80;
        source: "int/hero1.png"
    }
    Text{
        x: 200
        y: 200
        text: "Start"
        font.pointSize: 18;
        font.bold: true
        color: "#888000"
        MouseArea{
            anchors.fill: parent
            onClicked: {
                game.startGame()
                background.source = "Map.qml"
            }
        }
    }
    Text {
        x: 200
        y: 300
        text: "Quit"
        font.pointSize: 18;
        font.bold: true
        color: "#888000"
        MouseArea{
            anchors.fill: parent
            onClicked: {
                Qt.quit();
            }
        }
    }
}
