# Q03. Write a R program to find sum of all natural numbers between 1 to n

sum_of_natural_numbers <- function(n) {
  if (n <= 0) {
    cat("Please provide a positive integer value for n.\n")
    return(NULL)
  }
  
  sum <- 0
  for (i in 1:n) {
    sum <- sum + i
  }
  
  return(sum)
}

n <- 10
result <- sum_of_natural_numbers(n)
cat("The sum of natural numbers from 1 to", n, "is:", result, "\n")

