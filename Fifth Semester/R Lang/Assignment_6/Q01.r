# Q01. Write a R program to create a data frame from four given vectors.

# Sample data frame
names <- c("Alice", "Bob", "Charlie", "David")
ages <- c(25, 30, 28, 22)
scores <- c(95, 85, 92, 78)
grades <- c("A", "B", "A", "C")

data <- data.frame(Name = names, Age = ages, Score = scores, Grade = grades)
print(data)
