#include "headerA3.h"

void loadTweetsFromFile(tweet ** tweetList) {
    int i = 0;
    char file[151];

    printf ("Enter a filename to load from: ");
    scanf ("%s", file);

    FILE *fp = fopen(file, "r");
    if (fp == NULL) {
        printf ("Error!");
    }

    tweet * startTemp = *tweetList;
    while (startTemp != NULL) {
        fscanf (fp, "\n%p", startTemp->id);
        fscanf (fp, "\n%[^\n]s", startTemp->user);
        fscanf (fp, "\n%[^\n]s", startTemp->text);
    }
    printf ("Tweets imported!");
}