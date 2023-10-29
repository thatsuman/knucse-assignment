# Q12. Write a R program to find elements which are present in two given data frames

data1 <- data.frame(
  Name = c("Alice", "Bob", "Charlie", "David"),
  Age = c(25, 30, 28, 22)
)

data2 <- data.frame(
  Name = c("Bob", "David", "Eve"),
  Age = c(30, 22, 27)
)

common_elements <- intersect(data1$Name, data2$Name)
print(common_elements)
