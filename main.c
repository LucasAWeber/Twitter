#include "header.h"

int main()
{
    int input;

    tweet * headTweet = NULL;
    tweet * temp;
    tweet * temp2;

    loadTweetsFromFile(&headTweet);

    do
    {
        printf("1. Create a new tweet\n");
        printf("2. Display tweets\n");
        printf("3. Search a tweet (by keyword)\n");
        printf("4. Find how many words are \"stop words\"\n");
        printf("5. Delete the nth tweet\n");
        printf("6. Sort tweets based on userid\n");
        printf("7. Exit\n");
        printf("\n");

        printf ("Choose a menu option: ");
        // clears input buffer
        fflush(stdin);
        scanf ("%d", &input);

        switch (input)
        {
            case 1:
                addNodeToList(&headTweet, createTweet(headTweet));
                break;
            case 2:
                displayTweets(headTweet);
                break;
            case 3:
                searchTweetsByKeyword(headTweet);
                break;
            case 4:
                countStopWords(headTweet);
                break;
            case 5:
                deleteTweet(&headTweet);
			    break;
            case 6:
                sortID(&headTweet);
			    break;
            case 7:
			    break;
            default: printf ("That is an invalid choice\n");
        }
    } while (input != 7);

    saveTweetsToFile(headTweet);

    temp = headTweet;
    while (temp != NULL)
    {
        temp2 = temp->next;
        free(temp);
        temp = temp2;
    }

    return 0;
}