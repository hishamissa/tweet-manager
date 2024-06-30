#include "headerA3.h"

int main () {
    tweet * tweetList = NULL;
    int choice;

    do {
        printf ("\n****** MENU ******\n");
        printf ("1. Create a new tweet\n");
        printf ("2. Display tweets\n");
        printf ("3. Search a tweet (by keyword)\n");
        printf ("4. Find how many words are 'stop words'\n");
        printf ("5. Delete the nth tweet\n");
        printf ("6. Save tweets to a file\n");
        printf ("7. Load tweets from a file\n");
        printf ("8. Sort the given linked list on userid\n");
        printf ("9. Exit\n");

        printf ("Choose a menu option: ");
        scanf ("%d", &choice);

        switch (choice) {
            case 1:       
            addNodeToList(&tweetList, createTweet(tweetList));
            break;

            case 2:
            displayTweets(tweetList);
            break;
            
            case 3:
            searchTweetsByKeyword(tweetList);
            break;

            case 4:
            countStopWords(tweetList);   
            break;

            case 5:
            deleteTweet(&tweetList);  //**
            break;

            case 6:
            saveTweetsToFile(tweetList);
            break;

            case 7:
            loadTweetsFromFile(&tweetList); //**
            break;

            case 8:
            sortID(&tweetList);  //**
            break;

            case 9:
            printf ("Thank you for using twitter!\n");
            exit(1);
            break;
        }
    }
    while (choice != 9);

    free(tweetList);

    return 0;
}