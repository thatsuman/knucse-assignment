# Q07. Write a R program to calculate product of digits of a number

product_of_digits <- function(number) {
  if (number < 0) {
    number <- -number
  }
  
  product <- 1
  while (number > 0) {
    digit <- number %% 10
    product <- product * digit
    number <- number %/% 10
  }
  
  return(product)
}

number <- 863784638
digit_product <- product_of_digits(number)
cat("The product of digits in", number, "is:", digit_product, "\n")
