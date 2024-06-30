#include "headerA3.h"

int keywordHelper (char *string, char * word) {
    int i = 0;
    int j = 0;
    int stringLength, wordLength, length;

    stringLength = strlen(string);
    wordLength = strlen(word);
    length = stringLength - wordLength;

    for (i = 0; i < length + 1; i++) {
        if (word[0] == string[i]) {
            int h = 1;
            for (j = 1; j < wordLength; j++) {
                if (string[i + j] == word[j])
                h++;
            }
            if (h == wordLength)
                return 1;
        }
    }
    return 0;
}