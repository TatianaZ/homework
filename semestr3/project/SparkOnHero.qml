// import QtQuick 1.0 // to target S60 5th Edition or Maemo 5
import QtQuick 1.1

Image
{
    id: sparkP
    source: "int/combat/spark2.png"
    states: [
        State {
            name: "1"
            when: game.cQueue1 === 2
            PropertyChanges {
                target: sparkP; opacity: 0
            }
        },
        State{
            name: "2"
            when: game.cQueue1 === 1
            PropertyChanges {
                target: sparkP; opacity: 0
            }
        },
        State{
            name: "3"
            when: game.cQueue1 === 3
            PropertyChanges {
                target: sparkP; opacity: 1
            }
        }
    ]

    transitions: Transition {
        SequentialAnimation {

            ScriptAction {
                script: {
                    if (game.cQueue1 === 3 && game.combatRez === -1){
                        game.mobAttack();

                    }
                }
            }
            PauseAnimation {
                duration: 500
            }
            PropertyAnimation {
               properties: "opacity";
               easing.type: Easing.InOutQuad
            }
            ScriptAction {
                script: {
                     if (game.cQueue1 === 3){
                        game.combatQueue();
                     }
                    }
                }
        }
    }
}
