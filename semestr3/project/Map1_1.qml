// import QtQuick 1.0 // to target S60 5th Edition or Maemo 5
import QtQuick 1.1

Image {
    id: map


    states: [State {
        name: "1";
        when: game.map1_1 == 0;
        PropertyChanges { target: map;  source: "maps/tree1_m1_1.png"}
    },
        State {
            name: "2";
            when: game.map1_1 === 1;
            PropertyChanges { target: map;  source: "maps/grass1_m1_1.png" }
        },
        State{
            name: "3"
            when: game.map1_1 === 2;
            PropertyChanges { target: map;  source: "maps/grass2_m1_1.png" }
        },
        State{
            name: "4"
            when: game.map1_1 === -1;
            PropertyChanges { target: map;  source: "maps/tree2_m1_1.png" }
        },
        State{
            name: "5"
            when: game.map1_1 === -2;
            PropertyChanges { target: map;  source: "maps/tree3_m1_1.png" }
        },
        State{
            name: "6"
            when: game.map2_2 === -3;
            PropertyChanges { target: map;  source: "maps/calve1_1_1.png" }
        },
        State{
            name: "7"
            when: game.map2_2 === 3;
            PropertyChanges { target: map;  source: "maps/tree3_m1_1.png" }
        },
        State{
            name: "8"
            when: game.map2_2 === -4;
            PropertyChanges { target: map;  source: "maps/grass1_m1_1.png" }
        }
    ]
    Image {
        id: event
        source: "events/bush.png"
        opacity: 0;
        states: [
            State{
            name: "0"
            when: game.map1_1event === 0;
            PropertyChanges { target: event; source: "events/bush.png"; opacity: 0; }
            },
            State {
                name: "1"
                when: game.map1_1event === 1;
                PropertyChanges { target: event;  source: "events/bat_map1_1.png"; opacity: 1;}
            },
            State {
                name: "2"
                when: game.map1_1event === 2;
                PropertyChanges { target: event;  source: "events/clover_m1_1.png"; opacity: 1;}
            },
            State {
                name: "4"
                when: game.map1_1event === 4;
                PropertyChanges { target: event;  source: "events/bush_m1_1.png"; opacity: 1; }
            }
        ]
    }
    Rectangle{
       // x: 200
       // y: 200
        width: 200
        height: 200
        opacity: 0.01
        MouseArea{
            id: mouseArea;
            anchors.fill: parent;
            onClicked: {
                if (game.map1_1event == 4)
                {
                    game.takeGold();
                    game.takeEvent();
                    event.state = 0;
                    textMap.text = "Вы создали 1 золотой!"
                }
                if (game.map1_1event == 2)
                {
                    game.takeClover();
                    game.takeEvent();
                    event.state = 0;
                    textMap.text = "Вы собрали клевер!"
                }
                if (game.map1_1event == 1)
                {
                    game.startCombat();
                    game.takeEvent();
                    event.state = 0;
                    background.source = "Combat.qml"
                }
                if (game.map1_1event == 5)
                {
                    event.state = 0;
                    game.takeEvent();
                    background.source = "Conversation.qml"
                }
            }
        }
    }
}
