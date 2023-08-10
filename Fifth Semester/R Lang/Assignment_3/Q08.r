# Q08. Write a R program to enter a number and print its reverse

reverse_number <- function(number) {
  reversed <- 0
  while (number > 0) {
    digit <- number %% 10
    reversed <- reversed * 10 + digit
    number <- number %/% 10
  }
  
  return(reversed)
}

# Take user input for the number
number <- 123456789
reversed_number <- reverse_number(number)
cat("The reverse of", number, "is:", reversed_number, "\n")

