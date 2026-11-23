# Program 4 – Student Attendance System

## Description

A C++ program that manages basic student attendance information and demonstrates how attendance records change when students arrive late or leave.

## Features

- Accepts total number of students.
- Accepts present and absent student counts.
- Displays initial attendance.
- Simulates attendance updates:
  - One student arrives late.
  - Another student arrives.
  - One student leaves.
- Updates present and absent counts.
- Calculates final attendance percentage.

## Concepts Used

- Variables and data types
- User input using `cin`
- Increment operator (`++`)
- Decrement operator (`--`)
- Arithmetic operators
- Percentage calculation

## Input Requirements

All inputs must be integers:

- Total Students
- Present Students
- Absent Students

**Important:**

- Total students must be greater than zero.
- Present and absent students must be non-negative.
- Present students + absent students should equal total students.
- Provide enough absent students for the simulated arrivals and enough present students for the simulated departure.

Invalid or inconsistent values may result in incorrect attendance calculations.