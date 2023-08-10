# Q18. Write a R program to print Fibonacci series up to n terms

print_fibonacci <- function(n) {
  if (n <= 0) {
    cat("Please provide a positive integer value for n.\n")
    return(NULL)
  }
  
  fib_series <- c(0, 1)
  
  if (n == 1) {
    cat(fib_series[1], "\n")
  } else if (n == 2) {
    cat(fib_series, "\n")
  } else {
    for (i in 3:n) {
      next_term <- fib_series[i - 1] + fib_series[i - 2]
      fib_series <- c(fib_series, next_term)
    }
    cat(fib_series, "\n")
  }
}

n <- 10
print_fibonacci(n)
