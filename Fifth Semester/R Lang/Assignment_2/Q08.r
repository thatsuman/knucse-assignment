# Q08. Write a R program to input any alphabet and check whether it is vowel or consonant

alphabet <- readline(prompt = "Enter a single alphabet: ")

alphabet <- tolower(alphabet)

if (nchar(alphabet) != 1) {
  cat("Please enter a single alphabet.\n")
} else if (alphabet %in% c("a", "e", "i", "o", "u")) {
  cat(alphabet, "is a vowel.\n")
} else if (alphabet %in% letters) {
  cat(alphabet, "is a consonant.\n")
} else {
  cat("The input is not an alphabet.\n")
}
