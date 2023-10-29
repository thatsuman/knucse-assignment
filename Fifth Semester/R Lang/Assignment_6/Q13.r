# Q13. Write a R program to find elements come only once that are common to both given data
# frames.

library(dplyr)

data1 <- data.frame(
  Name = c("Alice", "Bob", "Charlie", "David", "Eve"),
  Age = c(25, 30, 28, 22, 27)
)

data2 <- data.frame(
  Name = c("Bob", "David", "Eve", "Frank"),
  Age = c(30, 22, 27, 35)
)

# Find elements that appear only once and are common to both data frames
common_elements <- data1 %>%
  inner_join(data2, by = "Name") %>%
  group_by(Name) %>%
  filter(n() == 1) %>%
  select(Name)
  
print(common_elements)
