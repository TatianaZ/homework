#include "uniquelist.h"

void UniqueList::addUnique(int newValue)
{
    if (search(newValue))
    {
        throw addNotUniqueElement();
    }
    add(newValue);
}
void UniqueList::deleteElement(int deleteValue)
{
    if (next == NULL)
    {
        throw deleteNoExistElement();
    }
    if (!search(deleteValue))
    {
        throw deleteNoExistElement();
    }
    deleteFromList(deleteValue);
}
