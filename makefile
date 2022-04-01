a.out: main.o addNodeToList.o createTweet.o displayTweets.o searchTweetsByKeyword.o countStopWords.o deleteTweet.o saveTweetsToFile.o loadTweetsFromFile.o sortID.o
	gcc -Wall -std=c99 main.o addNodeToList.o createTweet.o displayTweets.o searchTweetsByKeyword.o countStopWords.o deleteTweet.o saveTweetsToFile.o loadTweetsFromFile.o sortID.o
main.o: main.c header.h
	gcc -Wall -std=c99 -c main.c
addNodeToList.o: addNodeToList.c header.h
	gcc -Wall -std=c99 -c addNodeToList.c
createTweet.o: createTweet.c header.h
	gcc -Wall -std=c99 -c createTweet.c
displayTweets.o: displayTweets.c header.h
	gcc -Wall -std=c99 -c displayTweets.c
searchTweetsByKeyword.o: searchTweetsByKeyword.c header.h
	gcc -Wall -std=c99 -c searchTweetsByKeyword.c
countStopWords.o: countStopWords.c header.h
	gcc -Wall -std=c99 -c countStopWords.c
deleteTweet.o: deleteTweet.c header.h
	gcc -Wall -std=c99 -c deleteTweet.c
saveTweetsToFile.o: saveTweetsToFile.c header.h
	gcc -Wall -std=c99 -c saveTweetsToFile.c
loadTweetsFromFile.o: loadTweetsFromFile.c header.h
	gcc -Wall -std=c99 -c loadTweetsFromFile.c
sortID.o: sortID.c header.h
	gcc -Wall -std=c99 -c sortID.c
clean:
	rm *.o a.out