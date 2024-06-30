#include "headerA3.h"

void countStopWords(tweet * tweetList) {
    char stop[25][5] = { "a","an","and","are","as","at",
                        "be","by",
                        "for","from",
                        "has","he",
                        "in","is","it","its",
                        "of","on",
                        "that","the","to",
                        "was","were","will","with"};
    int count = 0;
    char tempTweet[151];
    int stopCount = 0;
    int i;
    char * stopWord;
    char stringLength;

    tweet * startTemp = tweetList;

    while (startTemp != NULL) {
        count += 1;
        strcpy(tempTweet, startTemp->text);
        stopWord = strtok(tempTweet, " ");

        stringLength = strlen(stopWord);

        while (stopWord != NULL) {
            for (i = 0; i < stringLength; i++) {
                stopWord[i] = tolower(stopWord[i]);     //lower case
            }
            for (i = 0; i < 25; i++) {
                if (strcmp(stopWord, stop[i]) == 0) {
                    stopCount++;
                }
            }
            stopWord = strtok(NULL, " ");
        }
        startTemp = startTemp->next;

    }
        printf ("Across %d tweets, %d stop words were found", count, stopCount);

}