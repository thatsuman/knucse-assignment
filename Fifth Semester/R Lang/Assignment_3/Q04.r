# Q04. Write a R program to find sum of all even numbers between 1 to n

sum_of_even_numbers <- function(n) {
  if (n <= 0) {
    cat("Please provide a positive integer value for n.\n")
    return(NULL)
  }
  
  sum <- 0
  for (i in 2:n) {
    if (i %% 2 == 0) {
      sum <- sum + i
    }
  }
  
  return(sum)
}

n <- 10
result <- sum_of_even_numbers(n)
cat("The sum of even numbers from 1 to", n, "is:", result, "\n")
