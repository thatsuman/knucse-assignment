# Q02. Write a R program to extract specific column from a data frame using column name.

data <- data.frame(
  Name = c("Eren", "Naruto", "Suman"),
  Age = c(25, 21, 22),
  Score = c(95, 85, 92)
)

selected_column <- data$Age

print(selected_column)
