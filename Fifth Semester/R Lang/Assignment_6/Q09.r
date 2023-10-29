# Q09. Write a R program to sort a given data frame by multiple column(s)

data <- data.frame(
  Name = c("Alice", "Bob", "Charlie", "David"),
  Age = c(25, 30, 28, 22),
  Score = c(95, 85, 92, 78)
)

sorted_data <- data[order(data$Score, data$Age), ]
print(sorted_data)
