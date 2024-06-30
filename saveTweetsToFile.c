#include "headerA3.h"

void saveTweetsToFile(tweet * tweetList) {
    char file[151];

    printf ("Enter the filename where you would like to store your tweets: ");
    scanf ("%s", file);

    FILE * fp;
    fp = fopen(file, "a");
    if (fp == NULL) {
        printf ("Error! File unable to open/create");
    }
    else {
        tweet * startTemp = tweetList;

        while (startTemp != NULL) {
            fprintf (fp, "%d, %s, %s\n", startTemp->id, startTemp->user, startTemp->text);
            startTemp = startTemp->next;
        }
        printf ("Output successful!");
    }
    fclose(fp);
}