# Q09. Write a R program to check whether a number is palindrome or not

is_palindrome <- function(number) {
  original <- number
  reversed <- 0
  
  while (number > 0) {
    digit <- number %% 10
    reversed <- reversed * 10 + digit
    number <- number %/% 10
  }
  
  return(original == reversed)
}

# Take user input for the number
number <- 6565656
if (is_palindrome(number)) {
  cat(number, "is a palindrome.\n")
} else {
  cat(number, "is not a palindrome.\n")
}
