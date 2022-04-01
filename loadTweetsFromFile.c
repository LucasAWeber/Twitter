#include "header.h"

void loadTweetsFromFile(tweet ** tweetList)
{
    char filename[FILENAME_MAX] = "tweetsStore.csv";
    FILE * fptr = fopen(filename, "r");
    if (fptr == NULL)
    {
        return;
    }
    char tempLine[200];
    while (fgets(tempLine, 200, fptr))
    {
        // obtains the tweet info from file and saves it into new node
        tweet * newTweet = malloc(sizeof(tweet));
        newTweet->id = atoi(strtok(tempLine, ","));
        strcpy(newTweet->user, strtok(NULL, ","));
        strcpy(newTweet->text, strtok(NULL, "\0"));

        // removes last comma while keeping other commas within the tweet intact
        for(int i = strlen(newTweet->text)-1; i >= 0; i--)
        {
            if(newTweet->text[i] == ',')
            {
                newTweet->text[i] = '\0';
                break;
            }
        }

        addNodeToList(tweetList, newTweet);
    }
    fclose(fptr);
    printf("Tweets imported!\n");
}