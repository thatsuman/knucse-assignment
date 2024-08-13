# Write a shell script that calculates the sum of integers from 1 to N using a loop

#!/bin/zsh

echo "Enter a number: "
read N
sum=0

for ((i=1; i<=N; i++)); do
    sum=$((sum + i))
done

echo "Sum of integers from 1 to $N is: $sum"

