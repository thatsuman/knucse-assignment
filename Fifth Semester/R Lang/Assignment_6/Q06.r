# Q06. Write a R program to add new row(s) to an existing data frame

data <- data.frame(
  Name = c("Alice", "Bob", "Charlie"),
  Age = c(25, 30, 28),
  Score = c(95, 85, 92)
)

new_row <- data.frame(Name = "David", Age = 22, Score = 78)
data <- rbind(data, new_row)
print(data)
