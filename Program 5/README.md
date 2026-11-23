# Program 5 – Scholarship Eligibility System

## Description

A C++ program that evaluates a student's scholarship eligibility based on academic performance and attendance percentage.

## Features

- Collects student information.
- Accepts marks in five subjects.
- Calculates total marks and academic percentage.
- Accepts total classes and attended classes.
- Calculates attendance percentage.
- Simulates attendance updates and corrections.
- Determines scholarship eligibility using conditional statements.

## Scholarship Criteria

- Full Scholarship: Attendance of at least 75% and academic percentage of at least 85%.
- Half Scholarship: Attendance of at least 75% and academic percentage of at least 75%.
- Not Eligible: Academic percentage below 75% or attendance below 75%.

## Concepts Used

- Variables and data types
- String handling
- User input using `cin`
- Arithmetic operators
- Increment and decrement operators
- Conditional statements (`if`, `else if`, `else`)
- Nested if statements
- Percentage calculations

## Input Requirements

- First Name: Text
- Last Name: Text
- Roll Number: Integer
- Subject Marks: Integers
- Total Classes: Integer
- Attended Classes: Integer

**Important:**

- Each subject has a maximum of 100 marks.
- Enter marks between 0 and 100.
- Total classes must be greater than zero.
- Attended classes must be between 0 and total classes.
- Use non-negative integer values.

The program does not validate all input ranges. Incorrect values may affect percentage calculations and scholarship results.