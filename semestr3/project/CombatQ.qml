// import QtQuick 1.0 // to target S60 5th Edition or Maemo 5
import QtQuick 1.1

Item{
    Image{
        id: q1
        source: "int/combat/hQ.png"
        x: 300
        states:[
            State{
                name: "1"
                when: game.cQueue1 === 1
                PropertyChanges {
                    target: q1
                    source: "int/combat/hQ.png"
                }
                PropertyChanges {
                    target: q4
                    source: "int/combat/hQ.png"
                }
            },
            State{
                name: "2"
                when: game.cQueue1 === 2
                PropertyChanges {
                    target: q1
                    source: "int/combat/rQ.png"
                }
                PropertyChanges {
                    target: q4
                    source: "int/combat/rQ.png"
                }
            },
            State{
                name: "3"
                when: game.cQueue1 === 3
                PropertyChanges {
                    target: q1
                    source: "int/combat/bQ.png"
                }
                PropertyChanges {
                    target: q4
                    source: "int/combat/bQ.png"
                }
            }
        ]
    }
    Image{
        id: q2
        x: 55 + q1.x
        states:[
            State{
                name: "1"
                when: game.cQueue2 === 1
                PropertyChanges {
                    target: q2
                    source: "int/combat/hQ.png"
                }
                PropertyChanges {
                    target: q5
                    source: "int/combat/hQ.png"
                }
            },
            State{
                name: "2"
                when: game.cQueue2 === 2
                PropertyChanges {
                    target: q2
                    source: "int/combat/rQ.png"
                }
                PropertyChanges {
                    target: q5
                    source: "int/combat/rQ.png"
                }
            },
            State{
                name: "3"
                when: game.cQueue2 === 3
                PropertyChanges {
                    target: q2
                    source: "int/combat/bQ.png"
                }
                PropertyChanges {
                    target: q5
                    source: "int/combat/bQ.png"
                }
            }
        ]
    }
    Image{
        id: q3
        x: 55 + q2.x
        states:[
            State{
                name: "1"
                when: game.cQueue3 === 1
                PropertyChanges {
                    target: q3
                    source: "int/combat/hQ.png"
                }
            },
            State{
                name: "2"
                when: game.cQueue3 === 2
                PropertyChanges {
                    target: q3
                    source: "int/combat/rQ.png"
                }
            },
            State{
                name: "3"
                when: game.cQueue3 === 3
                PropertyChanges {
                    target: q3
                    source: "int/combat/bQ.png"
                }
            }
        ]
    }
    Image{
        id: q4
        x: 55 + q3.x
    }
    Image{
        id: q5
        x: 55 + q4.x
    }
}
