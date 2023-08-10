# Q17. Write a R program to check whether a number is Perfect number or not

is_perfect <- function(number) {
  if (number <= 0) {
    return(FALSE)
  }
  
  divisors_sum <- 0
  for (i in 1:(number/2)) {
    if (number %% i == 0) {
      divisors_sum <- divisors_sum + i
    }
  }
  
  return(divisors_sum == number)
}

number <- 28

if (is_perfect(number)) {
  cat(number, "is a Perfect number.\n")
} else {
  cat(number, "is not a Perfect number.\n")
}
