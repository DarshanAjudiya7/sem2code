
# 🧠 Semester 2 Code Collection

A curated repository of C, C++ and SQL assignments/projects from Semester 2. Includes implementations of classes, structures, OOP concepts (complex numbers, time, bank account), student records, and SQL queries.

## 📂 Projects Overview

### 1. `time.cpp` — Time Addition  
Implements a `time1` class that stores hours, minutes, and seconds.  
- Supports constructor overloading  
- `addt2()` method adds two time objects with carryover logic  
- `display()` outputs formatted time

### 2. `complex.cpp` — Complex Number Operations  
Defines a `complex` class with real and imaginary parts.  
- Constructor variants  
- `add1complex()` adds current object to another and returns result  
- `addcomplex()` adds two objects and stores result in current object  
- `display()` prints as `r + i i`

### 3. `bank.cpp` — Banking System  
A simple banking class with account number, name, and balance.  
- `init()` prompts user to set up new account  
- `withdraw()` handles withdrawal with balance check  
- `display()` (optional) shows account details

### 4. `student.c` — Student Records Input  
Uses a `struct student` to store student information: name, ID, and marks.  
- `input()` function reads student details  
- Loops in `main()` to process multiple students

### 5. `queries.sql` — SQL Exercises  
Contains various SQL statements:
- `SELECT *`, `SELECT WHERE`, pattern matching (`LIKE`, `ILIKE`)  
- `GROUP BY`, aggregation functions (`SUM`, `AVG`, `MIN`, `MAX`, `COUNT`)  
- `ALTER TABLE ... ADD CONSTRAINT ... CHECK` usage

## 🛠️ Setup & Usage

1. Clone this repository:
    ```bash
    git clone https://github.com/DarshanAjudiya7/sem2code.git
    cd sem2code
    ```

2. Compile and run the C++ programs (GCC or any C++ compiler):
    ```bash
    g++ time.cpp -o time
    ./time
    g++ complex.cpp -o complex
    ./complex
    g++ bank.cpp -o bank
    ./bank
    ```

3. Compile and run the C program:
    ```bash
    gcc student.c -o student
    ./student
    ```

4. For SQL:
    - Load `queries.sql` into your SQL client (e.g. Oracle, MySQL, PostgreSQL)
    - Run queries and view results

## 📚 Learning Objectives

- Master constructor overloading and method overloading
- Implement basic operator-like behavior for classes
- Practice modular input/output via member functions
- Strengthen understanding of control structures: loops, conditionals
- Learn SQL operations for filtering, aggregation, and data constraints

## 🚀 How to Contribute

- Submit pull requests with improvements or bug fixes
- Add new projects or advanced assignments
- Provide better comments, input validation, or test cases

## 🧾 Author

**Darshan Ajudiya**  
Semester‑2 student project submissions  
Feel free to fork and adapt as needed!


