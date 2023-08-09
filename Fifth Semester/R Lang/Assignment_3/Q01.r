# Q01. Write a R program to print all natural numbers from 1 to n.

print_natural_numbers <- function(n) {
  if (n <= 0) {
    cat("Please provide a positive integer value for n.\n")
    return(NULL)
  }
  
  for (i in 1:n) {
    cat(i, " ")
  }
  cat("\n")
}

print_natural_numbers(10)
