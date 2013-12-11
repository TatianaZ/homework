#include <QtGui/QApplication>
#include <QtDeclarative/QDeclarativeView>
#include <QtDeclarative/QDeclarativeContext>
#include <QtDeclarative/QDeclarativeEngine>
#include "game.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QDeclarativeView canvas;
    Game game;

    canvas.setSource(QString("qrc:main.qml"));

    canvas.engine()->rootContext()->setContextObject(&game);
    canvas.engine()->rootContext()->setContextProperty("game", &game);

    canvas.setResizeMode(QDeclarativeView::SizeRootObjectToView);
   // qmlRegisterType<Game>();
    QObject::connect(canvas.engine(), SIGNAL(quit()), &app, SLOT(quit()));

    canvas.setGeometry(QRect(10, 30, 800, 600));
    canvas.show();

    return app.exec();
}


