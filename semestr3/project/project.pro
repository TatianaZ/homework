TEMPLATE = app
TARGET = project
QT += declarative

SOURCES += main.cpp \
    game.cpp \
    map.cpp \
    hero.cpp \
    combat.cpp \
    monster.cpp

HEADERS += \
    game.h \
    map.h \
    hero.h \
    combat.h \
    monster.h

OTHER_FILES += \
    main.qml \
    Combat.qml \
    Map.qml \
    Map0_0.qml \
    Map0_1.qml \
    Map0_2.qml \
    Map1_0.qml \
    Map1_1.qml \
    Map1_2.qml \
    Map2_0.qml \
    Map2_1.qml \
    Map2_2.qml \
    Rabbit.qml \
    SparkOnMob.qml \
    SparkOnHero.qml \
    Mob.qml \
    Hero.qml \
    MainMenu.qml \
    Lose.qml \
    CombatQ.qml \
    Conversation.qml

RESOURCES += \
    res.qrc

