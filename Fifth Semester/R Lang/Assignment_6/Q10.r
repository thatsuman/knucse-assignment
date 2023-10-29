# Q10. Write a R program to reorder an given data frame by column name

# Load the dplyr package
library(dplyr)

data <- data.frame(
  Name = c("Alice", "Bob", "Charlie", "David"),
  Age = c(25, 30, 28, 22),
  Score = c(95, 85, 92, 78)
)

# Reorder the data frame by column name ("Score" in this example)
data <- data %>%
  select(Score, everything())

print(data)
