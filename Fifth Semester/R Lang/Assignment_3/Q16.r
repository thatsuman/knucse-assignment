# Q16. Write a R program to check whether a number is Armstrong number or not

is_armstrong <- function(number) {
  num_copy <- number
  num_digits <- nchar(number)
  armstrong_sum <- 0
  
  while (num_copy > 0) {
    digit <- num_copy %% 10
    armstrong_sum <- armstrong_sum + digit ^ num_digits
    num_copy <- num_copy %/% 10
  }
  
  return(armstrong_sum == number)
}

number <- 153

if (is_armstrong(number)) {
  cat(number, "is an Armstrong number.\n")
} else {
  cat(number, "is not an Armstrong number.\n")
}
