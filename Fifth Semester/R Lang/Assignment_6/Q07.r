# Q07. Write a R program to drop column(s) by name from a given data frame

data <- data.frame(
  Name = c("Alice", "Bob", "Charlie"),
  Age = c(25, 30, 28),
  Score = c(95, 85, 92)
)

columns_to_drop <- c("Name", "Age")
data <- data[, !names(data) %in% columns_to_drop]
print(data)
