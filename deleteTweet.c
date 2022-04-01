#include "header.h"

void deleteTweet(tweet ** tweetList)
{
    tweet * temp = *tweetList;
    tweet * temp2 = *tweetList;
    int totalTweets = 0;
    int nthTweet = 0;
    int tweetID = 0;

    while (temp != NULL)
    {
        totalTweets++;
        temp = temp->next;
    }

    if (totalTweets < 1)
    {
        return;
    }

    printf("Currently there are %d tweets.\n", totalTweets);
    printf("\n");
    printf("Which tweet do you wish to delete - enter a value between 1 and %d: ", totalTweets);
    fflush(stdin);
    scanf("%d", &nthTweet);
    while(nthTweet < 1 || nthTweet > totalTweets)
    {
        printf("Invalid input\n");
        printf("Which tweet do you wish to delete - enter a value between 1 and %d: ", totalTweets);
        fflush(stdin);
        scanf("%d", &nthTweet);
    }

    temp = *tweetList;
    for (int i = 1; i < nthTweet; i++)
    {
        temp = temp->next;
    }
    tweetID = temp->id;
    if (temp == *tweetList)
    {
        *tweetList = temp->next;
    }
    else
    {
        for (int i = 1; i < nthTweet-1; i++)
        {
            temp2 = temp2->next;
        }
        temp2->next = temp->next;
    }
    free(temp);

    printf("\n");
    printf("Tweet %d deleted. There are now %d tweets left.\n", tweetID, totalTweets-1);
    printf("\n");
}