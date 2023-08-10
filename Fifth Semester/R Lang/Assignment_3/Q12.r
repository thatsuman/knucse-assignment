# Q12. Write a R program to calculate factorial of a number

calculate_factorial <- function(number) {
  if (number < 0) {
    cat("Factorial is not defined for negative numbers.\n")
    return(NULL)
  }
  
  factorial <- 1
  for (i in 1:number) {
    factorial <- factorial * i
  }
  
  return(factorial)
}

number <- 5
factorial_result <- calculate_factorial(number)

if (!is.null(factorial_result)) {
  cat("The factorial of", number, "is:", factorial_result, "\n")
}
