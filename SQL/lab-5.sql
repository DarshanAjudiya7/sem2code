-- =========================================================
-- Lab 5 : Use of Check Constraint, Logical Operators,
-- Range Searching, Pattern Matching and Aggregate Functions
-- =========================================================

------------------------------------------------------------
-- Step 1: Create Tables
------------------------------------------------------------

-- CLIENT_MASTER Table
CREATE TABLE CLIENT_MASTER (
    CLIENTNO VARCHAR(6) UNIQUE NOT NULL,
    NAME VARCHAR(7) UNIQUE NOT NULL,
    ADDRESS1 VARCHAR(30),
    ADDRESS2 VARCHAR(30),
    CITY VARCHAR(15),
    PINCODE NUMERIC(6),
    STATE VARCHAR(15),
    BALDUE NUMERIC(10,2)
);

-- PRODUCT_MASTER Table
CREATE TABLE PRODUCT_MASTER (
    PRODUCTNO VARCHAR(6),
    DESCRIPTION VARCHAR(15),
    PROFITPERCENT NUMERIC(4,2),
    UNITMEASURE VARCHAR(10),
    QTYONHAND NUMERIC(8),
    REORDERLVL NUMERIC(8),
    SELLPRICE NUMERIC(8,2),
    COSTPRICE NUMERIC(8,2)
);

-- SALESMAN_MASTER Table
CREATE TABLE SALESMAN_MASTER (
    SALESMANNO VARCHAR(6),
    SALESMANNAME VARCHAR(20),
    ADDRESS1 VARCHAR(30),
    ADDRESS2 VARCHAR(30),
    CITY VARCHAR(20),
    PINCODE NUMERIC(6),
    STATE VARCHAR(20),
    SALAMT NUMERIC(8,2),
    TGTTOGET NUMERIC(6,2),
    YTDSALES NUMERIC(6,2),
    REMARKS VARCHAR(60)
);

------------------------------------------------------------
-- Step 2: Insert Sample Data
------------------------------------------------------------

-- CLIENT_MASTER Data
INSERT INTO CLIENT_MASTER VALUES('1Y093','DARSHAN','SHASTRI MEDAIN','VIDYANAGAR','ANAND',360005,'GUJARAT',122.45);
INSERT INTO CLIENT_MASTER VALUES('12T53','HEER','GANDHI MEDAIN','GANDHINAGAR','AHMADABAD',387625,'TAMILNADU',950.45);
INSERT INTO CLIENT_MASTER VALUES('56087','KRISH','SHIVAM MEDAIN','PUNE','MUMBAI',282425,'MAHARASHTRA',91556.54);

-- PRODUCT_MASTER Data
INSERT INTO PRODUCT_MASTER VALUES('24R45','LAPTOP',25,'KILO',165,7,32543.76,4546.65);
INSERT INTO PRODUCT_MASTER VALUES('42R45','MOBILE',20,'KG',100,8,564.56,415.96);
INSERT INTO PRODUCT_MASTER VALUES('25R45','TV',15,'INCHES',500,9,856.16,52.95);

-- SALESMAN_MASTER Data
INSERT INTO SALESMAN_MASTER VALUES('CP020','DARSHAN','TCS','NANDEL_CHOCK','RAJKOT',360005,'GUJARAT',62000.50,2555,7547,'GOOD');
INSERT INTO SALESMAN_MASTER VALUES('CP071','HEER','MICROSOFT','KRISHNA_CHOCK','SURAT',352013,'GUJARAT',27000.50,2465,9568,'VERY_GOOD');
INSERT INTO SALESMAN_MASTER VALUES('CP001','KRISH','GOOGLE','RAJ_CHOCK','MUMBAI',384512,'MAHARASHTRA',3500,8655,5656,'EXCELLENT');

------------------------------------------------------------
-- Step 3: Check Constraint
------------------------------------------------------------

CREATE TABLE STUDENT (
    ROLLNO INT PRIMARY KEY,
    NAME VARCHAR(20),
    AGE INT CHECK (AGE >= 18),
    MARKS INT CHECK (MARKS BETWEEN 0 AND 100)
);

INSERT INTO STUDENT VALUES(1, 'DARSHAN', 20, 85);

------------------------------------------------------------
-- Step 4: Logical Operators
------------------------------------------------------------

-- AND: Students with age > 18 AND marks > 80
SELECT * FROM STUDENT WHERE AGE > 18 AND MARKS > 80;

-- OR: Students with marks < 40 OR age < 20
SELECT * FROM STUDENT WHERE MARKS < 40 OR AGE < 20;

-- NOT: Clients not from Gujarat
SELECT * FROM CLIENT_MASTER WHERE NOT STATE = 'GUJARAT';

------------------------------------------------------------
-- Step 5: Range Searching (BETWEEN / NOT BETWEEN)
------------------------------------------------------------

-- Clients with balance due between 100 and 1000
SELECT * FROM CLIENT_MASTER WHERE BALDUE BETWEEN 100 AND 1000;

-- Products with price not between 500 and 1000
SELECT * FROM PRODUCT_MASTER WHERE SELLPRICE NOT BETWEEN 500 AND 1000;

------------------------------------------------------------
-- Step 6: Pattern Matching (LIKE)
------------------------------------------------------------

-- Clients whose name starts with 'D'
SELECT * FROM CLIENT_MASTER WHERE NAME LIKE 'D%';

-- Clients whose name has 'A' as second character
SELECT * FROM CLIENT_MASTER WHERE NAME LIKE '_A%';

-- Products ending with 'E'
SELECT * FROM PRODUCT_MASTER WHERE DESCRIPTION LIKE '%E';

------------------------------------------------------------
-- Step 7: Aggregate Functions
------------------------------------------------------------

-- Average balance due of clients
SELECT AVG(BALDUE) AS AVG_BALDUE FROM CLIENT_MASTER;

-- Min and Max product price
SELECT MIN(SELLPRICE) AS MIN_PRICE, MAX(SELLPRICE) AS MAX_PRICE FROM PRODUCT_MASTER;

-- Count total clients
SELECT COUNT(*) AS TOTAL_CLIENTS FROM CLIENT_MASTER;

-- Absolute value
SELECT ABS(-500) AS ABSOLUTE_VALUE;

-- Power function 2^3
SELECT POWER(2,3) AS POWER_RESULT;

-- Round function (round price)
SELECT DESCRIPTION, ROUND(SELLPRICE,0) AS ROUNDED_PRICE FROM PRODUCT_MASTER;

-- Square root
SELECT SQRT(16) AS SQUARE_ROOT;

-- Exponential function
SELECT EXP(2) AS EXPONENTIAL_RESULT;

-- =========================================================
-- End of Lab 5 SQL File
-- =========================================================
