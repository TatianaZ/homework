#pragma once
#include "displaymas.h"
#include <stdio.h>
/**
  @brief класс, реадихующий обход массива из центра
  и выводящий результ в файл
  */
class DisplayInFile : public Display
{
public:
    /**
      @brief конструктор
      */
    DisplayInFile();
    /**
      @brief деструктор
      */
    ~DisplayInFile();
    /**
      @brief функция выводв массива в файл
      */
    void display();
};
