# Q14. Write a R program to find LRM of two numbers

calculate_gcd <- function(a, b) {
  while (b != 0) {
    temp <- b
    b <- a %% b
    a <- temp
  }
  return(a)
}

calculate_lcm <- function(a, b) {
  gcd <- calculate_gcd(a, b)
  lcm <- (a * b) / gcd
  return(lcm)
}

number1 <- 24
number2 <- 18

lcm_result <- calculate_lcm(number1, number2)
cat("The LCM of", number1, "and", number2, "is:", lcm_result, "\n")
