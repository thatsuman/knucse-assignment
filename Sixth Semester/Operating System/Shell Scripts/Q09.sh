# Write a function in a shell script that calculates the factorial of a given number

#!/bin/zsh

calculate_factorial() {
    num=$1
    fact=1
    for ((i=1; i<=num; i++)); do
        fact=$((fact * i))
    done
    echo $fact
}

echo "Enter a number:"
read input_number
factorial_result=$(calculate_factorial $input_number)
echo "Factorial of $input_number is: $factorial_result"

