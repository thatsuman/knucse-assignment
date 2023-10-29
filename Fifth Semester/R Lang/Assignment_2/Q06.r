# Q06. Write a R program to check whether a year is leap year or not

year <- 2024  

if ((year %% 4 == 0 && year %% 100 != 0) || year %% 400 == 0) {
  cat(year, "is a leap year.\n")
} else {
  cat(year, "is not a leap year.\n")
}
