# Q07. Write a R program to check whether a character is uppercase or lowercase alphabet

char <- "A"  

if (char %in% letters) {
  cat(char, "is a lowercase alphabet.\n")
} else if (char %in% LETTERS) {
  cat(char, "is an uppercase alphabet.\n")
} else {
  cat(char, "is not an alphabet.\n")
}
