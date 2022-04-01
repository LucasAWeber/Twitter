#include "header.h"

void saveTweetsToFile(tweet * tweetList)
{
    char filename[FILENAME_MAX] = "tweetsStore.csv";
    tweet * temp = tweetList;

    // opens file
    FILE * fptr = fopen(filename, "w");
    if (fptr == NULL)
    {
        return;
    }

    // saves each tweet to file
    while (temp != NULL)
    {
        fprintf(fptr, "%d,%s,%s,", temp->id, temp->user, temp->text);
        fprintf(fptr, "\n");
        temp = temp->next;
    }

    printf("Output successful!\n");
    fclose(fptr);
}