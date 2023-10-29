# Q08. Write a R program to drop row(s) by number from a given data frame

data <- data.frame(
  Name = c("Alice", "Bob", "Charlie", "David"),
  Age = c(25, 30, 28, 22),
  Score = c(95, 85, 92, 78)
)

rows_to_drop <- c(2, 4)
data <- data[-rows_to_drop, ]
print(data)
