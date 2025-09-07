-- =========================================================
-- LAB: Apply Various Types of Joins (Mapped to 3 Tables)
-- Tables: CLIENT_MASTER, PRODUCT_MASTER, SALESMAN_MASTER
-- =========================================================

-- Q1: Retrieve the salary for each Employee → (Salesman Salary)
SELECT SALESMANNAME, SALAMT FROM SALESMAN_MASTER;

-- Q2: Retrieve all distinct salary values.
SELECT DISTINCT SALAMT FROM SALESMAN_MASTER;

-- Q3: Find the sum, max, min, avg of salaries.
SELECT SUM(SALAMT) AS SUM_SAL,
       MAX(SALAMT) AS MAX_SAL,
       MIN(SALAMT) AS MIN_SAL,
       AVG(SALAMT) AS AVG_SAL
FROM SALESMAN_MASTER;

-- Q4: Retrieve the total number of employees → (Salesmen)
SELECT COUNT(*) AS TOTAL_SALESMEN FROM SALESMAN_MASTER;

-- Q5: Count distinct salary values.
SELECT COUNT(DISTINCT SALAMT) AS DISTINCT_SALARIES FROM SALESMAN_MASTER;

-- Q6: Retrieve address & pincode of client named ‘DARSHAN’.
SELECT ADDRESS1, ADDRESS2, PINCODE
FROM CLIENT_MASTER
WHERE NAME = 'DARSHAN';

-- Q7: Retrieve name & address of all clients from 'ANAND'.
SELECT NAME, ADDRESS1, ADDRESS2
FROM CLIENT_MASTER
WHERE CITY = 'ANAND';

-- Q8: List products with selling price > 500 and their salesman’s name.
SELECT P.PRODUCTNO, P.DESCRIPTION, P.SELLPRICE, S.SALESMANNAME
FROM PRODUCT_MASTER P
CROSS JOIN SALESMAN_MASTER S
WHERE P.SELLPRICE > 500;

-- Q9: For each salesman, list his name and compare with other salesman (self join).
SELECT A.SALESMANNAME AS EMPLOYEE, B.SALESMANNAME AS SUPERVISOR
FROM SALESMAN_MASTER A
LEFT JOIN SALESMAN_MASTER B
ON A.SALAMT < B.SALAMT;

-- Q10: Show new salary if salesman from 'RAJKOT' is given 10% raise.
SELECT SALESMANNAME, SALAMT, SALAMT*1.1 AS NEW_SAL
FROM SALESMAN_MASTER
WHERE CITY = 'RAJKOT';

-- Q11: Retrieve salesmen in Gujarat whose salary is between 20000 and 70000.
SELECT SALESMANNAME, SALAMT
FROM SALESMAN_MASTER
WHERE STATE = 'GUJARAT' AND SALAMT BETWEEN 20000 AND 70000;

-- Q12: Find sum, max, min, avg salary of salesmen from 'GUJARAT'.
SELECT SUM(SALAMT) AS SUM_SAL,
       MAX(SALAMT) AS MAX_SAL,
       MIN(SALAMT) AS MIN_SAL,
       AVG(SALAMT) AS AVG_SAL
FROM SALESMAN_MASTER
WHERE STATE = 'GUJARAT';

-- Q13: Retrieve number of clients from 'GUJARAT'.
SELECT COUNT(*) AS TOTAL_CLIENTS
FROM CLIENT_MASTER
WHERE STATE = 'GUJARAT';

-- Q14: Retrieve all salesmen who have no remark (no manager analogy).
SELECT * FROM SALESMAN_MASTER WHERE REMARKS IS NULL;

-- Q15: For each state, count salesmen and avg salary.
SELECT STATE, COUNT(*) AS TOTAL_SALESMEN, AVG(SALAMT) AS AVG_SAL
FROM SALESMAN_MASTER
GROUP BY STATE;

-- Q16: For each product, retrieve product no, name, and total stock.
SELECT PRODUCTNO, DESCRIPTION, QTYONHAND
FROM PRODUCT_MASTER;

-- Q17: For products with stock > 100, show product no, name, and stock.
SELECT PRODUCTNO, DESCRIPTION, QTYONHAND
FROM PRODUCT_MASTER
WHERE QTYONHAND > 100;

-- Q18: List clients with salesmen, ordered by city, then salesman name.
SELECT C.NAME AS CLIENT_NAME, S.SALESMANNAME, C.CITY
FROM CLIENT_MASTER C
JOIN SALESMAN_MASTER S ON C.CITY = S.CITY
ORDER BY C.CITY, S.SALESMANNAME, C.NAME;
