#include "header.h"

void displayTweets(tweet * tweetList)
{
    tweet * ptr = tweetList;
    while (ptr != NULL)
    {
        printf("%d: Created by %s: %s\n", ptr->id, ptr->user, ptr->text);
        ptr = ptr->next;
    }
}