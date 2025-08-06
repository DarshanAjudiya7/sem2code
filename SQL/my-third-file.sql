
CREATE TABLE employees (
    id INT PRIMARY KEY AUTO_INCREMENT,
    name VARCHAR(50),
    email VARCHAR(100),
    gender VARCHAR(10),
    date_of_birth DATE,
    salary DECIMAL(10, 2)
);
DROP TABLE employees;
INSERT INTO employees (name, email, gender, date_of_birth, salary) VALUES
('Darshan', 'darshan@example.com', 'Male', '1998-05-14', 65000.00),
('Heer', 'heer@example.com', 'Female', '2000-11-23', 72000.00),
('Krish', 'krish@example.com', 'Male', '1997-02-17', 58000.00),
('Deep', 'deep@example.com', 'Male', '1999-08-09', 50000.00),
('Rutvi', 'rutvi@example.com', 'Female', '2001-12-30', 61000.00),
('Durva', 'durva@example.com', 'Female', '1996-07-12', 84000.00),
('Pari', 'pari@example.com', 'Female', '2002-03-25', 56000.00),
('Uday', 'uday@example.com', 'Male', '1995-06-17', 69000.00),
('Vivek', 'vivek@example.com', 'Male', '1994-09-05', 77000.00),
('Harsh', 'harsh@example.com', 'Male', '2001-10-02', 45000.00),
('Rutika', 'rutika@example.com', 'Female', '1993-04-18', 62000.00),
('Aniket', 'aniket@example.com', 'Male', '1992-12-01', 75000.00),
('Shreya', 'shreya@example.com', 'Female', '1998-01-15', 54000.00),
('Kunal', 'kunal@example.com', 'Male', '1990-08-22', 68000.00),
('Niyati', 'niyati@example.com', 'Female', '1997-03-10', 71000.00),
('Manav', 'manav@example.com', 'Male', '1996-11-29', 61000.00),
('Divya', 'divya@example.com', 'Female', '1995-02-28', 57000.00),
('Harshit', 'harshit@example.com', 'Male', '1999-09-09', 65000.00),
('Ritika', 'ritika@example.com', 'Female', '2000-05-05', 52000.00),
('Ishan', 'ishan@example.com', 'Male', '1998-07-30', 63000.00),
('Juhi', 'juhi@example.com', 'Female', '1998-07-30' , 59000.00),
('Tushar', 'tushar@example.com', 'Male', '1993-01-08', 73000.00),
('Lata', 'lata@example.com', 'Female', '1989-11-11', 78000.00),
('Yash', 'yash@example.com', 'Male', '1997-06-06', 64000.00),
('Tanvi', 'tanvi@example.com', 'Female', '1999-03-03', 55000.00);

-- Querying Data
select * from employees;
select name,gender from employees;
SELECT * FROM employees WHERE gender = 'Male';
SELECT * FROM employees WHERE gender != 'Female';
SELECT * FROM employees WHERE gender <> 'Female';
SELECT * FROM employees WHERE date_of_birth < '1995-01-01';
SELECT * FROM employees WHERE id > 10;
SELECT * FROM employees WHERE id >= 5;
SELECT * FROM employees WHERE id <= 20;
SELECT * FROM users WHERE date_of_birth IS NULL;
