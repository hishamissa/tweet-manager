#include "headerA3.h"

void addNodeToList(tweet**tweetList,tweet * node) {
    if (*tweetList == NULL) {
        *tweetList = node;
    }
    else {
        tweet * startTemp = *tweetList;
        while (startTemp->next != NULL) {
            startTemp = startTemp->next;
        }
        startTemp->next = node;
    }
}