#include "header.h"

tweet * createTweet(tweet * tweetList)
{
    int uniqueid = 1;
    tweet * ptr;
    tweet * newTweet = malloc(sizeof(tweet));

    // gets username
    printf("Enter a username: ");
    // clears input buffer
    fflush(stdin);
    fgets(newTweet->user, 50, stdin);
    // removes trailing \n at the end of string
    newTweet->user[strcspn(newTweet->user, "\n")] = 0;

    // gets tweet text
    printf("Enter the user's tweet: ");
    // clears input buffer
    fflush(stdin);
    fgets(newTweet->text, 140, stdin);
    // removes trailing \n at the end of string
    newTweet->text[strcspn(newTweet->text, "\n")] = 0;
    printf("\n");

    // determines userid
    newTweet->id = 0;
    for (int i = 0; i < strlen(newTweet->user); i++)
    {
        newTweet->id += newTweet->user[i];
    }
    newTweet->id += strlen(newTweet->text);

    // checks all tweets in list and compares id to newTweet changes id if not unique
    do
    {
        uniqueid = 1;
        ptr = tweetList;
        while (ptr != NULL)
        {
            if (ptr->id == newTweet->id)
            {
                uniqueid = 0;
                newTweet->id += (rand() % 999) + 1;
            }
            ptr = ptr->next;
        }
    } while (uniqueid == 0);

    printf("Your computer-generated userid is %d\n", newTweet->id);

    return newTweet;
}