A3: mainA3.o createTweet.o displayTweets.o searchTweetsByKeyword.o countStopWords.o keywordHelper.o loadTweetsFromFile.o saveTweetsToFile.o deleteTweet.o sortID.o addNodeToList.o
	gcc mainA3.o createTweet.o displayTweets.o searchTweetsByKeyword.o countStopWords.o keywordHelper.o loadTweetsFromFile.o saveTweetsToFile.o deleteTweet.o sortID.o addNodeToList.o -o A3 

addNodeToList.o: addNodeToList.c headerA3.h
	gcc -Wall -std=c99 -c addNodeToList.c

createTweet.o: createTweet.c headerA3.h
	gcc -Wall -std=c99 -c createTweet.c

displayTweets.o: displayTweets.c headerA3.h
	gcc -Wall -std=c99 -c displayTweets.c

searchTweetsByKeyword.o: searchTweetsByKeyword.c headerA3.h
	gcc -Wall -std=c99 -c searchTweetsByKeyword.c

countStopWords.o: countStopWords.c headerA3.h
	gcc -Wall -std=c99 -c countStopWords.c

keywordHelper.o: keywordHelper.c headerA3.h
	gcc -Wall -std=c99 -c keywordHelper.c

loadTweetsFromFile.o: loadTweetsFromFile.c headerA3.h
	gcc -Wall -std=c99 -c loadTweetsFromFile.c

saveTweetsToFile.o: saveTweetsToFile.c headerA3.h
	gcc -Wall -std=c99 -c saveTweetsToFile.c

deleteTweet.o: deleteTweet.c headerA3.h
	gcc -Wall -std=c99 -c deleteTweet.c

sortID.o: sortID.c headerA3.h
	gcc -Wall -std=c99 -c sortID.c

mainA3.o: mainA3.c headerA3.h
	gcc -Wall -std=c99 -c mainA3.c

clean:
	rm *.o A3