# Q04. Write a R program to check whether a number is divisible by 5 and 11 or not

number <- 55  

is_divisible_by_5_and_11 <- (number %% 5 == 0) && (number %% 11 == 0)

if (is_divisible_by_5_and_11) {
  cat(number, "is divisible by both 5 and 11.\n")
} else {
  cat(number, "is not divisible by both 5 and 11.\n")
}
