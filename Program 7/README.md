# Program 7 – University Library Management System

## Description

A C++ program that simulates a basic university library system. It allows a student to select a book, displays its available copies, updates the copy count and calculates a late return fine.

## Features

- Collects student information.
- Displays a menu containing six books.
- Allows book selection using Book ID.
- Displays selected book information.
- Updates available copies after issuing a book.
- Tracks the total number of books issued.
- Accepts late return days.
- Calculates fines based on the number of late days.
- Generates a formatted library report.

## Available Books

| Book ID | Book Name                   | Available Copies |
| ------- | --------------------------- | ---------------- |
| 1       | Programming Fundamentals    | 10               |
| 2       | Object-Oriented Programming | 8                |
| 3       | Data Structures             | 12               |
| 4       | Database Management Systems | 6                |
| 5       | Computer Networks           | 9                |
| 6       | Operating Systems           | 7                |

## Fine Structure

| Late Return Days | Fine Per Day |
| ---------------- | ------------ |
| 0 or less        | Rs. 0        |
| 1–5              | Rs. 10       |
| 6–10             | Rs. 20       |
| More than 10     | Rs. 50       |

## Concepts Used

- Variables and data types
- String handling
- User input using `cin`
- `switch` statement
- Conditional statements
- Increment and decrement operators
- Arithmetic operations
- Fine calculations

## Input Requirements

- First Name: Text
- Last Name: Text
- Roll Number: Integer
- Book ID: Integer (1–6)
- Late Return Days: Integer

**Important:**

- Select a valid Book ID between 1 and 6.
- Enter a whole number for late return days.
- Do not enter text in numeric fields.
- The number of available copies depends on the selected book.

The program demonstrates issuing one book per execution. It does not fully validate book availability or reject every invalid input. Use sensible values that match the displayed book information.