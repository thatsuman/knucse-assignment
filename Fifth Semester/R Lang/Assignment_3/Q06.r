# Q06. Write a R program to calculate sum of digits of a number

sum_of_digits <- function(number) {
  if (number < 0) {
    number <- -number
  }
  
  sum <- 0
  while (number > 0) {
    digit <- number %% 10
    sum <- sum + digit
    number <- number %/% 10
  }
  
  return(sum)
}

number <- 863784638
digit_sum <- sum_of_digits(number)
cat("The sum of digits in", number, "is:", digit_sum, "\n")
