# How can you use arithmetic operations within a shell script?

#!/bin/zsh

num1=10
num2=5

# Using $((...)) for arithmetic
result=$((num1 + num2))
echo "Sum using \$((...)): $result"

# Using expr for arithmetic
sum=$(expr $num1 + $num2)
echo "Sum using expr: $sum"

# Using let for arithmetic
let "sum = num1 + num2"
echo "Sum using let: $sum"

