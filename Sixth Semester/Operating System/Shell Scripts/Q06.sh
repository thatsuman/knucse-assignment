# How do you use the for loop to iterate through a list of values?

#!/bin/zsh

subjects=("operating system" "networking" "compiler design" "microprocessor" "soft computing" "software engg")

for subject in "${subjects[@]}"; do
    echo "Current Subject: $subject"
done

