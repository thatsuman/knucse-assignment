# Q10. Write a R program to find power of a number using for loop

calculate_power <- function(base, exponent) {
  result <- 1
  
  for (i in 1:exponent) {
    result <- result * base
  }
  
  return(result)
}

base <- 2
exponent <- 10
power_result <- calculate_power(base, exponent)
cat(base, "raised to the power of", exponent, "is:", power_result, "\n")
