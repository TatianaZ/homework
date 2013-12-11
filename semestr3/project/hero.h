#pragma once
#include <QObject>
/**
  �����, ���������� ������� ��� ��������� �����
  */
class Hero : public QObject
{
    Q_OBJECT
public:
    explicit Hero(QObject *);
    /**
      @brief ������� ���������� ���������� ��� �����
      */
    void heroStart(){
        emit cloverChange(clover);
        emit goldChange(gold);
    }
    /**
      @brief ������� ��� ��������� �������
      */
    void takeClover(){
        clover++;
        emit cloverChange(clover);
    }
    /**
      @brief ������� ��� ������� �����
      */
    void useClover(){
        if (clover){
            clover--;
            hp = 50;
            emit cloverChange(clover);
        }
    }
    /**
      @brief ������� ��� ��������� ������
      */
    void takeGold(){
        gold++;
        emit goldChange(gold);
    }
    /**
      @brief ������� ��� ����� ������
      */
    void useGold(){
        if (gold){
            gold--;
            emit goldChange(gold);
        }
    }
    /**
      @brief ������� ��� ��������� ����� ������
      @param damage - ����, ���������� ������
      */
    void takeDamage(int damage){
        hp -= damage;
        if (hp <= 0){
            emit heroDie();
        }
    }
    /**
      @brief ������� ��� ����� ������
      ���������� ����
      */
    int action(){
        return dps;
    }
    /**
      @brief ������� ��� ������� � ����������
      ���������� ���������� �����
      */
    int takeLead(){
        return lead;
    }
    /**
      @brief ������� ��� ������� � ���������� �������
      */
    int takeRabbitLead(){
        return rabbitLead;
    }
    /**
      @brief ������� ��� ����� ��������
      */
    int rabbitAction(){
        return rabbitDps;
    }
    /**
      @brief ������� ��� ������� � �� �����
      */
    int heroHp(){
        return hp;
    }

signals:
    void cloverChange(int);
    void goldChange(int);
    void heroDie();
    void heroIsLive();

public slots:

private:
    int gold;
    int clover;
    int hp;
    int dps;
    int lead;
    int rabbitLead, rabbitDps;
};
