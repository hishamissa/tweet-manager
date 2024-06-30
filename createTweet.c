#include "headerA3.h"

tweet * createTweet(tweet * tweetList) {
    int i;
    int length, ascii = 0;
    tweet * newTweet;

    newTweet = malloc(sizeof(tweet));
    newTweet->next = NULL;
    

    printf ("Enter a username: ");
    scanf ("\n%[^\n]", newTweet->user);

    printf ("Enter the user's tweet: ");
    scanf ("\n%[^\n]s", newTweet->text);

    length = strlen(newTweet->user);

    // printf ("Username: %s\n", tweetList->user);
    for (i = 0; i < length; i++) {
        ascii = ascii + newTweet->user[i];
    }
    // printf ("ascii = %d", ascii);

    newTweet->id = strlen(newTweet->text) + ascii;

    printf ("Your computer generated userid is %d\n", newTweet->id);

    return newTweet;
}