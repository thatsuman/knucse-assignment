# Create a script that searches for a specific word in a file and counts its occurrences

#!/bin/zsh

echo "Enter the word to search for:"
read target_word
echo "Enter the filename:"
read filename

count=$(grep -o -w "$target_word" "$filename" | wc -l)
echo "The word '$target_word' appears $count times in '$filename'."
