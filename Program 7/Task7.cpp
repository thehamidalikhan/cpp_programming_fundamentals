#include<iostream>
using namespace std;

int main()
{
    string first_name;
    string last_name;
    string book_name;
    int roll_number;
    int menu_choice;
    int book_id;
    int available_copies;
    int updated_copies;
    int total_books_issued = 0;
    int late_return_days;
    int fine_per_day;
    int total_fine;

    cout << "\n=================================================" << endl;
    cout << "\tABDUL WALI KHAN UNIVERSITY MARDAN" << endl;
    cout << "\t  DEPARTMENT OF COMPUTER SCIENCE" << endl;
    cout << "=================================================" << endl;
    cout << "\t    UNIVERSITY LIBRARY SYSTEM" << endl;
    cout << "-------------------------------------------------\n" << endl;
    
    cout << "Enter Your First Name  : ";
    cin >> first_name;
    cout << "Enter Your Last Name   : ";
    cin >> last_name;
    string student_name = first_name + " " + last_name;   
    
    cout << "Enter Your Roll Number : ";
    cin >> roll_number;
    

    cout << "\nSelect An Item From The Menu!\n" << endl;
    cout << "------------------BOOK MENU-----------------------\n" << endl;
    cout << "1.  Programming Fundamentals\t   10 Copies" << endl;
    cout << "2.  Object-Oriented Programming\t   8 Copies" << endl;
    cout << "3.  Data Structures\t\t   12 Copies" << endl;
    cout << "4.  Database Management Systems\t   6 Copies" << endl;
    cout << "5.  Computer Networks\t\t   9 Copies" << endl;
    cout << "6.  Operating Systems\t\t   7 Copies" << endl;
    cout << "--------------------------------------------------" << endl;
    
    cout << "Enter Book ID (1-6) : ";
    cin >> menu_choice;
    cout << "--------------------------------------------------" << endl;
    switch (menu_choice)
    {
        case (1):
            book_name = "Programming Fundamentals";
            available_copies = 10;
            book_id = 1;
            break;
            
        case (2):
            book_name = "Object-Oriented Programming";
            available_copies = 8;
            book_id = 2;
            break;

        case (3):
            book_name = "Data Structures";
            available_copies = 12;
            book_id = 3;
            break;
            
        case (4):
            book_name = "Database Management Systems";
            available_copies = 6;
            book_id = 4;
            break;
            
        case (5):
            book_name = "Computer Networks";
            available_copies = 9;
            book_id = 5;
            break;    
            
        case (6):
            book_name = "Operating Systems";
            available_copies = 7;
            book_id = 6;
            break;

        default:
            cout << "Invalid menu choice" << endl;
    }
    
    if  ((menu_choice >= 1) && (menu_choice <= 6))
    {
            cout << "\nSelected Book\t    : " << book_name << endl;
            cout << "Available Copies    : " << available_copies << endl;
            cout << "\nBook Issued Successfully!\n" << endl;

            total_books_issued++;
            available_copies--;
            updated_copies = available_copies;
            cout << "Updated Copies\t    : " << updated_copies << endl;
            cout << "Total Books Issued  : " << total_books_issued << "\n" << endl;
            cout << "--------------------------------------------------" << endl;
            cout << "\nEnter Number Of Late Return Days : ";
            cin >> late_return_days;

    if      (late_return_days <= 0)
        {
            fine_per_day = 0;
        }
    else if (late_return_days <= 5)
        {
            fine_per_day = 10;
        }
    else if (late_return_days <= 10)
        {
            fine_per_day = 20;
        }
    else
        {
            fine_per_day = 50;
        }
        
            total_fine = fine_per_day * late_return_days;
    
            cout << "\n---------------LIBRARY REPORT--------------------" << endl;
            cout << "\nStudent Name         : " << student_name << endl;
            cout << "Roll Number          : " << roll_number << endl;
            cout << "Book Name            : " << book_name << endl;
            cout << "Book ID              : " << book_id << endl;
            cout << "Late Return Days     : " << late_return_days << endl;
            cout << "Fine Per Day         : " << "Rs. " << fine_per_day << endl;
            cout << "Total Fine           : " << "Rs. " << total_fine << endl;
            cout << "=================================================" << endl;
            cout << "       THANK YOU FOR USING OUR LIBRARY!" << endl;
            cout << "=================================================\n" << endl;    
        }
        
        return 0;
}