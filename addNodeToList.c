#include "header.h"

void addNodeToList(tweet ** tweetList, tweet * node)
{
    if (node != NULL)
    {
        node->next = NULL;
        if (*tweetList == NULL)
        {
            *tweetList = node;
        }
        else
        {
            tweet * temp = *tweetList;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = node; 
        }
    }
}