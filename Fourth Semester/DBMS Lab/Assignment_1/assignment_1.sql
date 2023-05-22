-- Author: Suman Mondal <suman.mondal@outlook.in>
-- Date: 26 March 2023
-- Version: mysql v8.0.32-0ubuntu0.22.04.2 for Linux on x86_64 ((Ubuntu))
-- Assignment 1 DBMS Lab

-- Creating Table
CREATE TABLE client_master (
	client_no VARCHAR(6),
	name VARCHAR (20),
    city VARCHAR (20),
    pin_code INT,
    state VARCHAR (20)
);

-- Inserting Values
INSERT INTO client_master 
VALUES	("C00001", "Ivan Bayros", "Mumbai", 400054, "Maharashtra"),
		("C00002", "Mamta Mazumder", "Madras", 780001, "Tamil Nadu"),
        ("C00003", "Chhaya Bankar", "Mumbai", 400057, "Maharashtra"),
        ("C00004", "Ashwini Joshi", "Bangalore", 560001, "Karnataka"),
        ("C00005", "Hanel Colaco", "Mumbai", 400060, "Maharashtra"),
        ("C00006", "Deepak Sharma", "Mangalore", 560050, "Karnataka");
        
-- Find out the names of all clients
SELECT name FROM client_master;

-- List all clients who are located in Mumbai
SELECT name FROM client_master WHERE city = "Mumbai";

-- Change the city of client no ‘C00005’to ‘Bangalore’
UPDATE client_master SET city = "Bangalore" WHERE client_no = "C00005";
SELECT * FROM client_master;

-- Delete the rows where state holds the value ‘Tamil Nadu’
DELETE FROM client_master WHERE state = "Tamil Nadu";
SELECT * FROM client_master;

-- Add a column balance of data type number and size = 10
ALTER TABLE client_master ADD balance INTEGER(10); 
SELECT * FROM client_master;

-- Change the name of the table
RENAME TABLE client_master TO client_data;

-- Display the record of all clients whose name starting with ‘A’.
SELECT * FROM client_data WHERE name LIKE 'A%';

-- Display the record of all clients whose name third character is ‘a’.
SELECT * FROM client_data WHERE name LIKE '__A%';

-- Display the record of all clients whose name end with ‘a’.
SELECT * FROM client_data WHERE name LIKE '%a';
