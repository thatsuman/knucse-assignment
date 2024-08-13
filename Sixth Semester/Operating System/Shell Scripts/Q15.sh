# Check if a number is Even or Odd

#!/bin/zsh

read -p "Enter a number: " mynumber
if [ $((mynumber%2)) -eq 0 ]; then
echo "Your number is even"
else
echo "Your number is odd."
fi
