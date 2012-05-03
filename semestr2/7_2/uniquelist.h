#pragma once
#include "list.h"

/**
  @brief класс, реализующий список, в котором могут быть только
  неповтор€ющиес€ элементы
  */
class UniqueList : public List
{
public:
    /**
      @brief исключение, которое бросаетс€ в случае, когда
      пытаютс€ удалить элемент, которого нет в списке
      */
    class deleteNoExistElement{};
    /**
      @brief исключение, которое бросаетс€ в случае, когда
      пытаютс€ добавить элемент, который ест ьв списке
      */
    class addNotUniqueElement{};
    /**
      @brief добавление элемента в список
      @param newValue элемент, который добавл€етс€
      @throw addNotUniqueElement
      */
    void addUnique(int newValue);
    /**
      @brief удаление элемента из списка
      @param deleteValue элемент, который нужно удалить из списка
      @throw deleteNoExistElement
      */
    void deleteElement(int deleteValue);
};
