// import QtQuick 1.0 // to target S60 5th Edition or Maemo 5
import QtQuick 1.1

Image {
    id: map
 //   source: "maps/grass1_1.png"
/*    width: 170
    height: 130
        color: "#098765"
        border.width: 1
        MouseArea {
            id: mouseArea;
            anchors.fill: parent;
            onClicked: mainW.map1_0 = 2;
            }*/
    states: [State {
        name: "1";
        when: game.map1_0 == 0;
        PropertyChanges { target: map;  source: "maps/tree1_m1_0.png"}
    },

        State {
            name: "2";
            when: game.map1_0 === 1;
            PropertyChanges { target: map;  source: "maps/grass1_m1_0.png" }
        },
        State{
            name: "3"
            when: game.map1_0 === 2;
            PropertyChanges { target: map;  source: "maps/grass2_m1_0.png" }
        },
        State{
            name: "4"
            when: game.map1_0 === -1;
            PropertyChanges { target: map;  source: "maps/tree2_m1_0.png" }
        },
        State{
            name: "5"
            when: game.map1_0 === -2;
            PropertyChanges { target: map;  source: "maps/tree3_m1_0.png" }
        },
        State{
            name: "7"
            when: game.map2_2 === 3;
            PropertyChanges { target: map;  source: "maps/tree3_m1_0.png" }
        },
        State{
            name: "8"
            when: game.map2_2 === -4;
            PropertyChanges { target: map;  source: "maps/grass1_m1_0.png" }
        }
    ]
    Image {
        id: event
        source: "events/bush.png"
        opacity: 0;
        states: [
            State{
            name: "0"
            when: game.map1_0event === 0;
            PropertyChanges { target: event;  source: "events/bush.png"; opacity: 0; }
            },
            State {
                name: "1"
                when: game.map1_0event === 1;
                PropertyChanges { target: event;  source: "events/bat_map1_0.png"; opacity: 1;}
            },
            State {
                name: "2"
                when: game.map1_0event === 2;
                PropertyChanges { target: event;  source: "events/clover_m1_0.png"; opacity: 1;}
            },
            State {
                name: "4"
                when: game.map1_0event === 4;
                PropertyChanges { target: event;  source: "events/bush_m1_0.png"; opacity: 1; }
            }
        ]
    }
}
