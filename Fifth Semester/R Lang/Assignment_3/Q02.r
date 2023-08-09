# Q02. Write a R program to print all odd number between 1 to 100.

print_odd_numbers <- function() {
  for (i in 1:100) {
    if (i %% 2 != 0) {
      cat(i, " ")
    }
  }
  cat("\n")
}

print_odd_numbers()
