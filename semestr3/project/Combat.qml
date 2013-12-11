// import QtQuick 1.0 // to target S60 5th Edition or Maemo 5
import QtQuick 1.1
//import "Rabbit.qml"

Item{
    Image {
        source: "int/combat/combat_fon.png"
    }
    Mob{}
    Hero{}
    Rabbit{}
    Image {
        source: "int/combat/combat_fon2.png"
    }
    Image {
        id: gold
        source: "int/combat/gold.png"
        x: 0
        y: 430
    }
    Text{
        text: game.gold;
        x: 20
        y: 540
        color: "#888000"
        font.pointSize: 20;
        font.bold: true
    }
   /* Text{
        text: game.cQueue1 + " " + game.cQueue2 + " " + game.cQueue3 + " " + game.cQueue1 + " " + game.cQueue2
        x: 600
        y: 40
        color: "#888000"
        font.pointSize: 20;
        font.bold: true
    }*/
    CombatQ{}


    Image {
        id: attack
        source: "int/combat/attack1.png"
        x: 210
        y: 450

        MouseArea{
            anchors.fill: parent
            onClicked: {
                if(game.cQueue1 === 1 && game.combatRez === -1)
                {
                    game.heroAttack();
                    spark.stateSpark = 1;
                    game.combatQueue();
                }

                if (game.combatRez === 1)
                {
                    background.source = "Map.qml"
                }
                if (game.combatRez === 0)
                {
                    background.source = "Lose.qml"
                }
            }
        }
    }
    Image
    {
        id: spark
        property int stateSpark: 0
        source: "int/combat/spark.png"
        states: [
            State {
                name: "1"
                when: spark.stateSpark === 0
                PropertyChanges {
                    target: spark; opacity: 0
                }
            },
            State{
                name: "2"
                when: spark.stateSpark === 1
                PropertyChanges {
                    target: spark; opacity: 1
                }
            }
        ]
        transitions: Transition {
            SequentialAnimation {

                PropertyAnimation {
                   properties: "opacity";
                   easing.type: Easing.InOutQuad
                }
                PauseAnimation {
                    duration: 500
                }
                ScriptAction {
                    script: {
                         if (spark.stateSpark === 1){
                            spark.stateSpark = 0;
                         }
                        }
                    }
            }
        }
    }
    Text{
        text: "Атака!"
        x: 210
        y: 540
        color: "#888000"
        font.pointSize: 10;
        font.bold: true
    }
    Image{
        id: healself
        source: "int/combat/heal.png"
        x: 280
        y: 450
        MouseArea{
            anchors.fill: parent
            onClicked: {
                if(game.cQueue1 === 1 && game.combatRez === -1 && game.clover)
                {
                    game.heal();
                 //   spark.stateSpark = 1;
                    game.combatQueue();
                }

                if (game.combatRez === 1)
                {
                    background.source = "Map.qml"
                }
                if (game.combatRez === 0)
                {
                    background.source = "Lose.qml"
                }
            }
        }
    }
    Text{
        text: "1 клевер(" + game.clover + ")"
        x: 280
        y: 540
        color: "#888000"
        font.pointSize: 10;
        font.bold: true
    }
 /*   Image{
        id: healrabbit
        source: "int/combat/heal_rabbit.png"
        x: 360
        y: 450
    }
    Text{
        text: "1 золотой"
        x: 370
        y: 540
        color: "#888000"
        font.pointSize: 10;
        font.bold: true
    }*/
    Image{
        id: magic
        source: "int/combat/magic.png"
        x: 450
        y: 450
        MouseArea{
            anchors.fill: parent
            onClicked: {
                if(game.cQueue1 === 1 && game.combatRez === -1)
                {
                    game.megaDamage();
                    spark.stateSpark = 1;
                    game.combatQueue();
                }

                if (game.combatRez === 1)
                {
                    background.source = "Map.qml"
                }
                if (game.combatRez === 0)
                {
                    background.source = "Lose.qml"
                }
            }
        }
    }
    Text{
        text: "1 золотой"
        x: 450
        y: 540
        color: "#888000"
        font.pointSize: 10;
        font.bold: true
    }
    Image{
        source: "int/combat/hp1.png"
    }
    Text{
        text: game.hpMob
        x: 110
        color: "#888000"
        font.pointSize: 20;
        font.bold: true
    }

    Image{
        source: "int/combat/hp2.png"
        x: 600
    }
    Text{
        text: game.hpHero
        x: 720
        y: 500
        color: "#888000"
        font.pointSize: 20;
        font.bold: true
    }
    Rectangle{
        id: tempRec
        x: 300
        y: 300
        height: 40
        width: 200
        color: "#000000"
        Text{
            id: tempText
            text: "Fight!"
            x: 50
            y: 10
            color: "#888000"
            font.pointSize: 20;
            font.bold: true
        }
        MouseArea{
            anchors.fill: parent

            onClicked: {
                tempRec.opacity = 0
                tempText.opacity = 0
                if (game.cQueue1 === 3)
                {
                    game.mobAttack();
                    game.combatQueue();
                }
                if (game.cQueue1 === 2)
                {
                    game.rabbitAttack();
                    game.combatQueue();
                }
            }
        }
    }
}
