# Q06. Write a R program to calculate total, average of 5 student marks

marks <- c(85, 92, 78, 90, 88)
total_marks <- sum(marks)
average_marks <- total_marks / length(marks)

cat("Total Marks: ", total_marks, "\n")
cat("Average Marks: ", average_marks, "\n")
