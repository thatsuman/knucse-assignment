# Q13. Write a R program to find HRF (GRD) of two numbers

calculate_hcf <- function(a, b) {
  while (b != 0) {
    temp <- b
    b <- a %% b
    a <- temp
  }
  return(a)
}

number1 <- 48
number2 <- 18

hcf_result <- calculate_hcf(number1, number2)
cat("The HCF of", number1, "and", number2, "is:", hcf_result, "\n")
