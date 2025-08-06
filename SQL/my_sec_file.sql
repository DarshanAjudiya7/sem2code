-- CREATE & USE DATABASE --
create database tutorial;
use tutorial;

-- CREATE --
CREATE TABLE users (
id INT AUTO_INCREMENT PRIMARY KEY,
name VARCHAR(100) NOT NULL,
email VARCHAR(100) UNIQUE NOT NULL,
gender ENUM('Male', 'Female', 'Other'),
date_of_birth DATE,
created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP
);

-- SELECT --
select * from users;
SELECT name, email FROM users;

-- RENAME --
RENAME TABLE users TO customers;
RENAME TABLE customers TO users;

-- ALTER --
ALTER TABLE users ADD COLUMN is_active BOOLEAN DEFAULT TRUE;
ALTER TABLE users DROP COLUMN is_active;
ALTER TABLE users MODIFY COLUMN name VARCHAR(150);
alter table users modify column email varchar(100) after id;
ALTER TABLE users MODIFY COLUMN email VARCHAR(100) FIRST;
ALTER TABLE users MODIFY COLUMN gender ENUM('Male', 'Female', 'Other') AFTER name;

-- INSERT --
INSERT INTO users (name, email, gender, date_of_birth) values 
('darshan','darshan@gmail.com','Male','2006-10-07'),
('heer','heer@gmail.com','Male','2006-11-10'),
('rutvi','rutvi@gmail.com','Female','2006-05-28');

