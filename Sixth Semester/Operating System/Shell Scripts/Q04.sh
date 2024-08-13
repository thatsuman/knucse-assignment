# Create a shell script that checks if a file exists in the current directory

#!/bin/zsh

file="do-not-open.txt"

if [ -e "$file" ]; then
	echo "File exists: $file"
else
	echo "File not exists: $file"
fi

