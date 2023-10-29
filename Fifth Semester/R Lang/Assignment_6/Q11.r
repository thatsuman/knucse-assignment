# Q11. Write a R program to compare two data frames to find the row(s) in first data frame that
# are not present in second data frame

# Load the dplyr package
library(dplyr)

data1 <- data.frame(
  Name = c("Alice", "Bob", "Charlie", "David"),
  Age = c(25, 30, 28, 22)
)

data2 <- data.frame(
  Name = c("Bob", "David", "Eve"),
  Age = c(30, 22, 27)
)

result <- anti_join(data1, data2)

print(result)
