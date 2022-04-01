# Basic Information
Lucas Weber  
Tweet Manager

# How to compile and run
- Navigate to the 'Twitter' folder (ie: run 'cd Twitter/' in terminal)
- Run the command 'make' in terminal to compile program
- Lastly, Run the command './a.out' in terminal to run the program

# Completed Components
- main.c
    - main includes a switch statement allowing user to choose what they do next
    - They have the option to; Create a new tweet, Display all tweets, Search a tweet, Find out how many words are stop words, Delete the nth tweet, Save tweets to a file, Load tweets from a file, Sort the tweets based on id, and Exit.
- createTweet.c
    - Creates a tweet node with a user inputted username and message and a unique algorithmically determined tweet ID
    - Returns the new tweet node
- displayTweets.c
    - Displays all the tweets currently in the linked list
- searchTweetsByKeyword.c
    - Takes user input for keyword and searches through tweet linked list for appearance(s) of keyword
- countStopWords.c
    - Searches through tweet linked list for stop words based on a predetermined array
    - Prints total number of stop words found in all the tweets
- deleteTweet.c
    - Takes user input for n and deletes the nth tweet in linked list
- saveTweetsToFile.c
    - Saves current tweet linked list into a user inputted file (if it exists)
- loadTweetsFromFile.c
    - Loads tweets from user inputted file (if it exists) into current linked list (adds to existing tweets)
- sortID.c
    - Sorts tweet linked list based on the tweets computer generated ID
- addNodeToList.c
    - Adds passed in node to the end of the tweet linked list (used with functions createTweet and loadTweetsFromFile)

# Limitations
- When saving tweets then loading from the file directly after the tweets now become doubled same id, same user, same text (idealy would check if the tweet exists in linked list already before adding it)
- Stop words dont account for a case where there is punctuation after the word such as 'word a.' (currently wouldnt count as stop word because only looks for spaces/beginning/end on each side of the stop word)
- 

# Future Improvements
- Make algorithms more efficient (some longer algorithms that could be simplified)
- Add more options in the menu
    - Having a seperate 'recently deleted' linked list, the tweets can either be brought back to main linked list or fully deleted for good
    - Having an option to like tweets and tracks the amount of likes a tweet has
    - Having an option to reply to a tweet and it will point to both the next tweet in the linked list ASWELL as the tweet its replying to (can end up being a chain of replies)
- As previously mentioned, add a check when loading tweets from file to make sure those tweets dont already exist before adding them to linked list to prevent duplicated tweets
- Create a GUI in another language for this program so it isnt just a command line program