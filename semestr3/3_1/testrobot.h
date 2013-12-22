#include "robot.h"
#include <QtCore/QObject>
#include <QtTest/QtTest>
#include <QObject>

class TestRobot : public QObject
{
    Q_OBJECT
public:
    explicit TestRobot(QObject *parent = 0){}
    
private slots:
    void init()
    {
        int robots[3] = {1,2,3};
        robot = new Robot(robots, 5, 3);
    }
    void cleanup()
    {
        delete robot;
    }
    void testRobot()
    {
        int mat[25] = {
            0, 1, 0, 0, 0,
            1, 0, 1, 1, 0,
            0, 1, 0, 0, 1,
            0, 1, 0, 0, 0,
            0, 0, 1, 0, 0
        };
        int mat2[25] ={
            0,0,0,0,1,
            0,0,0,0,1,
            0,0,0,0,1,
            0,0,0,0,1,
            1,1,1,1,0
        };
        int mat3[25] = {
            0,1,0,1,1,
            1,0,1,0,0,
            0,1,0,1,0,
            1,0,1,0,1,
            1,0,0,1,0
        };
        robot->nVertex(mat);
        QVERIFY(robot->check() == 0);
        robot->nVertex(mat2);
        QVERIFY(robot->check() == 1);
        robot->nVertex(mat3);
        QVERIFY(robot->check() == 1);
    }
private:
    int *mas1, *mas2, *mas3;
    Robot *robot;
};
