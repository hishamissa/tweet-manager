#include "headerA3.h"

void deleteTweet(tweet ** tweetList) {
    int i = 0;
    tweetList[0]->id = '\0';
    int userChoice = 0;
    int count = 0;
    tweet * temp2 = *tweetList;
    tweet * startTemp = *tweetList;

    while (startTemp != NULL) {
        startTemp = startTemp->next;
        count++;
    }

    printf ("Currently there are %d tweets\n", count);
    printf ("\nWhich tweet do you wish to delete - enter a value between 1 and %d: ", count);
    scanf ("%d", &userChoice);

    startTemp = *tweetList;

    while (i < userChoice - 1) {
        i++;
        startTemp = startTemp->next;

    }
    temp2 = startTemp->next;
    startTemp->next = temp2->next;
    free(temp2);
    count = count - 1;

    printf ("Tweet %d deleted. There are now %d tweets left", userChoice, count);

}