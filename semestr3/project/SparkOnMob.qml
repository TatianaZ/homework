// import QtQuick 1.0 // to target S60 5th Edition or Maemo 5
import QtQuick 1.1

Image
{
    id: sparkM
    source: "int/combat/spark.png"
    states: [
        State {
            name: "1"
            when: game.cQueue1 === 2
            PropertyChanges {
                target: sparkM; opacity: 1
            }
        },
        State{
            name: "2"
            when: game.cQueue1 === 1
            PropertyChanges {
                target: sparkM; opacity: 0
            }
        },
        State{
            name: "3"
            when: game.cQueue1 === 3
            PropertyChanges {
                target: sparkM; opacity: 0
            }
        }
    ]
    transitions: Transition {
        SequentialAnimation {

            ScriptAction {
                script: {
                    if (game.cQueue1 == 2 && game.combatRez === -1){
                        game.rabbitAttack();

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
                    if (game.cQueue1 == 2){
                        game.combatQueue();
                        /*if (game.combatRez === 1)
                        {
                            background.source = "Map.qml"
                        }
                        if (game.combatRez === 0)
                        {
                            background.source = "Map.qml"
                        }*/
                    }
                }
            }

        }
    }
}

