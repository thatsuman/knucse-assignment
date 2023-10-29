# Q07. Write a R program to calculate Simple Interest and compound interest

principal <- 1000  
rate <- 0.05       
time <- 3          

simple_interest <- (principal * rate * time)
compound_interest <- principal * (1 + rate)^time - principal

cat("Principal Amount: Rs.", principal, "\n")
cat("Annual Interest Rate: ", rate * 100, "%\n")
cat("Time Period (years): ", time, "\n")
cat("Simple Interest: Rs.", simple_interest, "\n")
cat("Compound Interest: Rs.", compound_interest, "\n")
