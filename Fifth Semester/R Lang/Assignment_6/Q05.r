# Q05. Write a R program to add a new column in a given data frame

data <- data.frame(
  Name = c("Alice", "Bob", "Charlie", "David"),
  Age = c(25, 30, 28, 22),
  Score = c(95, 85, 92, 78)
)

new_column <- c("A", "B", "A", "C")
data$Grade <- new_column
print(data)
