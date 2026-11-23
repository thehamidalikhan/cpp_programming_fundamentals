# Program 6 – University Cafeteria Management System

## Description

A C++ program that simulates a university cafeteria ordering system. It allows a student to select a food item, enter its quantity and receive a calculated bill.

## Features

- Collects student information.
- Displays a menu of six food items.
- Allows selection using menu numbers.
- Calculates the total price based on item quantity.
- Applies a 10% discount when the bill reaches Rs. 1,000 or more.
- Calculates the final payable amount.
- Displays transaction and stock information.
- Generates a formatted cafeteria receipt.

## Available Menu

| Item No. | Food Item       | Price   |
| -------- | --------------- | ------- |
| 1        | Chicken Burger  | Rs. 350 |
| 2        | Chicken Biryani | Rs. 250 |
| 3        | Pizza Slice     | Rs. 200 |
| 4        | French Fries    | Rs. 150 |
| 5        | Sandwich        | Rs. 180 |
| 6        | Tea             | Rs. 80  |

## Stock Information

- Initial stock: 20 items.
- Remaining stock is calculated by subtracting the ordered quantity from the initial stock.

## Concepts Used

- Variables and data types
- String handling
- User input using `cin`
- `switch` statement
- Conditional statements
- Arithmetic operators
- Increment operator
- Discount and bill calculations

## Input Requirements

- First Name: Text
- Last Name: Text
- Roll Number: Integer
- Menu Choice: Integer (1–6)
- Item Quantity: Positive integer

**Important – Please Read Before Running:**

- Select a menu option between 1 and 6.
- Enter a positive whole number for item quantity.
- The initial stock is limited to 20 items.
- Do not enter a quantity greater than 20.
- Do not enter text in numeric fields.

The program does not enforce the stock limit through input validation. Entering a quantity greater than 20 can result in negative remaining stock and unrealistic calculations.

This program is designed around a single ordering transaction per execution.