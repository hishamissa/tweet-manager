#include "headerA3.h"

int searchTweetsByKeyword(tweet * tweetList) {
    int noWord = 0;
    char keyword[151];
    
    printf ("Enter a keyword to search: ");
    scanf ("\n%[^\n]s", keyword);

    tweet * startTemp = tweetList;

    while (startTemp != NULL) {
        if (keywordHelper(startTemp->text, keyword)) {
            printf ("Match found for '%s': ", keyword);
            printf ("%s wrote: ", startTemp->user);
            printf ("'%s' \n", startTemp->text);
            noWord++;
        }
        startTemp = startTemp->next;
    }
    if (noWord == 0) {

        printf ("No tweets exist with keyword '%s'\n", keyword);
    }

    return 0;
}