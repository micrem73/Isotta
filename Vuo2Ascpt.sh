#!/bin/bash
# Script to check if a file exists every second, then rename it with timestamp and run it. 

while true; do
    if [ -f ~/Library/Application\ Support/Isotta/LastTweet.scpt ]; then 
        echo "File exists, renaming now" 

        ora=$(date +%s)
        mv ~/Library/Application\ Support/Isotta/LastTweet.scpt ~/Library/Application\ Support/Isotta/LastTweet.$ora."scpt"

	echo "File renamed, running now" 
	osascript ~/Library/Application\ Support/Isotta/LastTweet.$ora."scpt" &

    else
        ora=$(date +%s)
        echo $ora." Running"   

    fi 
    sleep 1  #check every second  
done