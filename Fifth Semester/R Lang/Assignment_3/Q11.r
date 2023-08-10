# Q11. Write a R program to find all factors of a number

find_factors <- function(number) {
  factors <- c()
  
  for (i in 1:number) {
    if (number %% i == 0) {
      factors <- c(factors, i)
    }
  }
  
  return(factors)
}

number <- 24
factor_list <- find_factors(number)
cat("The factors of", number, "are:", factor_list, "\n")
