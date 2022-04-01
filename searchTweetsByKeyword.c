#include "header.h"

int searchTweetsByKeyword(tweet * tweetList)
{
    char keyword[50];
    char tempText[141];
    tweet * temp = tweetList;
    int returnVal = -1;

    printf("Enter a keyword to search: ");
    scanf("%s", keyword);
    for (int i = 0; i < strlen(keyword); i++)
    {
        keyword[i] = tolower(keyword[i]);
    }

    // loops through the different tweets
    while (temp != NULL)
    {
        strcpy(tempText, temp->text);
        for (int i = 0; i < strlen(tempText); i++)
        {
            tempText[i] = tolower(tempText[i]);
        }
        if (strstr(temp->text, keyword))
        {
            returnVal = 1;
            printf("Match found for '%s': %s wrote: \"%s\"\n", keyword, temp->user, temp->text);
        }

        temp = temp->next;
    }

    return returnVal;
}