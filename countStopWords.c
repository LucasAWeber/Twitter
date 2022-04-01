#include "header.h"

void countStopWords(tweet * tweetList)
{
    // Curently doesnt account for CAPS & finds all occurences of these substrings (all occurences of the letter a) so might have to fix this
    char stopWords[][10] = {"a","an","and","are","as","at","be","by","for","from","has","he","in","is","it","its","of","on","that","the","to","was","were","will","with"};
    int totalTweets = 0;
    int totalStopWords = 0;
    tweet * temp = tweetList;
    char * tempChar;
    char tempText[141];
    int left = 0;
    int right = 0;

    while (temp != NULL)
    {
        strcpy(tempText, temp->text);
        for (int i = 0; i < strlen(tempText); i++)
        {
            tempText[i] = tolower(tempText[i]);
        }
        for (int i = 0; i < 25; i++)
        {
            tempChar = strstr(tempText, stopWords[i]);
            while (tempChar)
            {
                left = 0;
                right = 0;

                // checks there is space on either side OR if its the beginning or end of string
                if ((tempChar == tempText && !(tempChar == tempText + strlen(tempText) - 1)) || *(tempChar - 1) == ' ')
                {
                    left = 1;
                }

                if ((!(tempChar == tempText) && tempChar == tempText + strlen(tempText) - 1) || *(tempChar + strlen(stopWords[i])) == ' ')
                {
                    right = 1;
                }

                if (left && right)
                {
                    totalStopWords++;
                }

                tempChar++;
                tempChar = strstr(tempChar, stopWords[i]);
            }
        }
        totalTweets++;
        temp = temp->next;
    }

    printf("Across %d tweets, %d stop words were found.\n", totalTweets, totalStopWords);
}