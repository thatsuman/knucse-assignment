# Q04. Write a R program to extract 3rd and 5th rows with 1st and 3rd columns from a given data frame

data <- data.frame(
  Name = c("Alice", "Bob", "Charlie", "David", "Eve"),
  Age = c(25, 30, 28, 22, 27),
  Score = c(95, 85, 92, 78, 88)
)

selected_data <- data[c(3, 5), c(1, 3)]
print(selected_data)
