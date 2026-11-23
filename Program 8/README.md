# Program 8 – University Parking Management System

## Description

A C++ program that simulates a university parking management system. It collects vehicle and student information, calculates parking charges and applies discounts according to the user's category.

## Features

- Collects student or visitor information.
- Accepts vehicle registration number.
- Provides four vehicle types.
- Calculates parking charges based on parking hours.
- Offers three user categories.
- Applies category-based discounts.
- Calculates total charges and final payable amount.
- Updates parked vehicle and available parking space counts.
- Generates a formatted parking receipt.

## Vehicle Types and Charges

| Vehicle Type | Selection | Charges Per Hour |
| ------------ | --------- | ---------------- |
| Motorcycle   | 1         | Rs. 20           |
| Car          | 2         | Rs. 50           |
| Van          | 3         | Rs. 80           |
| Bus          | 4         | Rs. 150          |

## User Categories and Discounts

| Category       | Selection | Discount |
| -------------- | --------- | -------- |
| Student        | 1         | 30%      |
| Faculty Member | 2         | 20%      |
| Visitor        | 3         | 0%       |

## Parking Information

- Initially Parked Vehicles: 60
- Initially Available Spaces: 40

## Concepts Used

- Variables and data types
- String handling
- User input using `cin`
- `switch` statements
- Conditional statements
- Arithmetic operators
- Percentage and discount calculations
- Increment and decrement-related concepts

## Input Requirements

- First Name: Text
- Last Name: Text
- Vehicle Number: Text (format: ABC-123)
- Vehicle Type: Integer (1–4)
- Parking Hours: Positive integer
- User Category: Integer (1–3)

**Important:**

- Enter the vehicle number in the displayed format.
- Select a vehicle type between 1 and 4.
- Enter a positive whole number for parking hours.
- Select a valid category between 1 and 3.
- Do not enter text in numeric fields.

The program initializes 40 available parking spaces but does not enforce a parking capacity check. Avoid treating the displayed available spaces as an unlimited resource or assuming the program rejects additional vehicles when spaces run out.

Invalid inputs may produce incorrect results because complete input validation is not implemented.