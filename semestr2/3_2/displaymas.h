#pragma once
#include "display.h"
/**
  @brief класс, реадихующий обход массива из центра
  и выводящий результ на экран
  */
class DisplayMas : public Display
{
public:
    /**
      @brief конструктор
      */
    DisplayMas();
    /**
      @brief деструктор
      */
    ~DisplayMas();
    /**
      @brief функция вывод массива на экран
      */
    void display();
};
