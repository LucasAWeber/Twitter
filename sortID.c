#include "header.h"

void sortID (tweet ** head)
{
    tweet * temp = *head;
    tweet * temp2 = *head;
    tweet * tempSwap;
    tweet * tempSwap2;

    if (temp == NULL || temp->next == NULL)
    {
        return;
    }

    while (temp != NULL)
    {
        temp2 = *head;
        if (temp2->id > temp2->next->id)
        {
            tempSwap = temp2;
            tempSwap2 = temp2->next->next;
            temp2 = temp2->next;
            temp2->next = tempSwap;
            temp2->next->next = tempSwap2;
            *head = temp2;

        }
        while (temp2->next->next != NULL)
        {
            if (temp2->next->id > temp2->next->next->id)
            {
                tempSwap = temp2->next;
                temp2->next = temp2->next->next;
                tempSwap2 = temp2->next->next;
                temp2->next->next = tempSwap;
                temp2->next->next->next = tempSwap2;
            }
            temp2 = temp2->next;
        }
        temp = temp->next;
    }
}