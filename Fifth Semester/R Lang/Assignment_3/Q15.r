# Q15. Write a R program to check whether a number is Prime number or not

is_prime <- function(number) {
  if (number <= 1) {
    return(FALSE)
  }
  
  if (number <= 3) {
    return(TRUE)
  }
  
  if (number %% 2 == 0 || number %% 3 == 0) {
    return(FALSE)
  }
  
  i <- 5
  while (i * i <= number) {
    if (number %% i == 0 || number %% (i + 2) == 0) {
      return(FALSE)
    }
    i <- i + 6
  }
  
  return(TRUE)
}

number <- 17

if (is_prime(number)) {
  cat(number, "is a prime number.\n")
} else {
  cat(number, "is not a prime number.\n")
}
