-- Author: Suman Mondal <suman.mondal@outlook.in>
-- Date: 28 March 2023
-- Version: mysql v8.0.32-0ubuntu0.22.04.2 for Linux on x86_64 ((Ubuntu))
-- Assignment 2 DBMS Lab

-- Creating Table
CREATE TABLE myEmployee (
	emp_id VARCHAR (4),
    emp_name VARCHAR (20),
    dept VARCHAR (10),
    salary INT
);

-- Inserting Values
INSERT INTO myEmployee VALUES 
	("E001", "RAM SINGH", "HR", 20000),
    ("E002", "AMRIT KUMAR", "MRKT", 15000),
    ("E003", "RAVI KUMAR", "IT", 30000),
    ("E004", "NITIN PATHAK", "HR", 20000),
    ("E005", "PIYUSH SINGH", "MRKT", 15000),
    ("E006", "ANJAN KONAR", "MRKT", 10000);


SELECT * FROM myEmployee;

-- Write a SQL query to display the maximum salary
SELECT MAX(salary) FROM myEmployee;

-- Write a SQL query to display the employee name who is taking maximum salary
SELECT emp_name FROM myEmployee WHERE salary = (SELECT MAX(salary) FROM myEmployee);

-- Write a SQL query to display the 2nd highest salary
SELECT MAX(salary) FROM myEmployee WHERE salary < (SELECT MAX(salary) FROM myEmployee);

-- Write a SQL query to display the employee name, id who is taking 2nd highest salary
SELECT emp_name, emp_id FROM myEmployee WHERE salary = (SELECT MAX(salary) FROM myEmployee WHERE salary < (SELECT MAX(salary) FROM myEmployee));

-- Write a SQL query to display all the department name along with number of employee working in that
SELECT dept, COUNT(dept) FROM myEmployee GROUP BY dept;

-- Write a SQL query to display all the department name where number of employees are less than 2
SELECT dept FROM myEmployee GROUP BY dept HAVING COUNT(dept) < 2;

-- Write a SQL query to display the employee name who is working where number of employees are less than 2
SELECT emp_name FROM  myEmployee WHERE dept IN (SELECT dept FROM myEmployee GROUP BY dept HAVING COUNT(dept) < 2);













