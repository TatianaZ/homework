// import QtQuick 1.0 // to target S60 5th Edition or Maemo 5
import QtQuick 1.1

Item{
    Image{
        source: "int/lose.png"
        MouseArea{
            anchors.fill: parent
            onClicked: {
                game.end()
                background.source = "MainMenu.qml"
            }
        }
    }
}
