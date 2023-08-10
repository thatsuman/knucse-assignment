# Q05. Write a R program to count number of digits in a number

count_digits <- function(number) {
  if (number < 0) {
    number <- -number
  }
  
  num_digits <- 0
  while (number > 0) {
    number <- number %/% 10
    num_digits <- num_digits + 1
  }
  
  return(num_digits)
}

number <- 863784638
num_digits <- count_digits(number)
cat("The number of digits in", number, "is:", num_digits, "\n")
