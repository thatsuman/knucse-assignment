# Q03. Write a R program to extract first two rows from a given data frame

data <- data.frame(
  Name = c("Eren", "Mikasa", "Charlie", "Suman"),
  Age = c(25, 30, 28, 22),
  Score = c(95, 85, 92, 78)
)

first_two_rows <- head(data, 2)
print(first_two_rows)
