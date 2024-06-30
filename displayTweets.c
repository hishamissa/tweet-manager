#include "headerA3.h"

void displayTweets(tweet * tweetList) {
    tweet * startTemp = tweetList;

    while (startTemp != NULL) {
            printf ("\n");
            printf ("ID: %d ", startTemp->id);
            printf ("Created by %s: ", startTemp->user);
            printf ("%s ", startTemp->text);
            printf ("\n");
            startTemp = startTemp->next;
    }
}
        
/*    for (i = 0; i < 1; i++) {
        printf ("\n");
        printf ("ID: %d ", tweetList->id);
        printf ("Created by %s: ", tweetList->user);
        printf ("%s ", tweetList->text);
        printf ("\n");
    }
}
*/