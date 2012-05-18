#pragma once
template <class T>
class Compare
{
public:
    /**
      @brief конструктор
      */
    Compare()
    {}
    /**
      @brief функци€ позвол€юща€ сравнить элементы списка
      @param *element1, *element2 элементы, которые сравниваютс€
      @return 1 если второй элемент больше другого
      0 инако
      */
    bool compareElements(T element1, T element2)
    {
        if (element1 < element2)
        {
            return 1;
        }
        return 0;
    }
};
