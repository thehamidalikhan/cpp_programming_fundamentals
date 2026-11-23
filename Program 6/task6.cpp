#include <iostream>
using namespace std;

int main()
{   
    string first_name;
    string last_name;
    string food_item;
    float discount = 0;
    int transaction = 0;
    int initial_stock = 20;
    int roll_number;
    int menu_choice;
    int item_quantity;
    int unit_price;
    int item_total_price; 
    int total_payable;
    int remaining_stock;

    cout << "\n-------------------------------------------------" << endl;
    cout << "    WELCOME TO UNIVERSITY CAFETERIA, AWKUM" << endl;
    cout << "-------------------------------------------------\n" << endl;

    cout << "Enter Your First Name  : ";
    cin >> first_name;
    cout << "Enter Your Last Name   : ";
    cin >> last_name;
    string student_name = first_name + " " + last_name;   

    cout << "Enter Your Roll Number : ";
    cin >> roll_number;
        
    cout << "\nSelect An Item From The Menu!" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "Item No\t\tFood Item\t\tPrice (Rs)" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << " 1\t\tChicken Burger\t\t350" << endl;
    cout << " 2\t\tChicken Biryani\t\t250" << endl;
    cout << " 3\t\tPizza Slice\t\t200" << endl;
    cout << " 4\t\tFrench Fries\t\t150" << endl;
    cout << " 5\t\tSandwich\t\t180" << endl;
    cout << " 6\t\tTea\t\t\t80" << endl;
    cout << "-------------------------------------------------" << endl;
   
    cout << "Enter Item No (1-6)   : ";
    cin >> menu_choice;

    switch (menu_choice)
    {
        case (1):
            food_item = "Chicken Burger";
            unit_price = 350;
            break;

        case (2):
            food_item = "Chicken Biryani";
            unit_price = 250 ;
            break;
 
        case (3):
            food_item = "Pizza Slice";
            unit_price = 200 ;
            break;
           
        case (4):
            food_item = "French Fries";
            unit_price = 150 ;
            break;
            
        case (5):
            food_item = "Sandwich";
            unit_price = 180 ;
            break;    
        
        case (6):
            food_item = "Tea";
            unit_price = 80 ;
            break;

        default:
            cout << "Invalid Menu Choice" << endl;
    }
    
    if  ((menu_choice >= 1) && (menu_choice <= 6))
        {
            cout << "Enter Item Quantity   : ";
            cin >> item_quantity;
            cout << "-------------------------------------------------" << endl;
            item_total_price = unit_price * item_quantity; 
            
    if  (item_total_price >= 1000)
        {
            discount = (item_total_price / 10);        
        }
        else
        {
            discount = 0;
        }
            total_payable = item_total_price - discount;

            transaction++;
            remaining_stock = initial_stock - item_quantity;

        // **** Decrement operator will decrease a fixed value from the 
        // **** initial stock for example: initial_stock--,initial_stock--; 
        // **** will decrease initial stock value by 2 no matter what 
        // **** quantity of ordered items is.
        // **** So I subtracted the item quantity from initial stock value 
        // **** for accurate result.

            cout << "\n\n=================================================" << endl;
            cout << "\tABDUL WALI KHAN UNIVERSITY MARDAN" << endl; 
            cout << "\t DEPARTMENT OF COMPUTER SCIENCE" << endl;
            cout << "=================================================" << endl;
            cout << "\t    UNIVERSITY CAFETERIA" << endl;
            cout << "-------------------------------------------------\n" << endl;
            cout << "Student Name : "<<student_name<<"\tRoll Number : "<< roll_number<<endl;
            cout << "\n-------------------Final Bill---------------------" << endl;
            cout << "Selected Item \t\t: " << food_item<< endl;
            cout << "Unit Price\t\t: " << unit_price << endl;
            cout << "Quantity\t\t: " << item_quantity << endl;
            cout << "Total Bill\t\t: " << item_total_price << endl;
            cout << "Discount ( 10% )\t: " << discount << endl;
            cout << "Total Payable\t\t: " << total_payable << endl;
            cout << "Transactions\t\t: " << transaction << endl;
            cout << "Initial Stock\t\t: " << initial_stock << endl;
            cout << "Remaining Stock\t\t: " << remaining_stock << endl;
            cout << "-------------------------------------------------" << endl;
            cout << "\t   THANK YOU FOR YOUR ORDER!" << endl;
            cout << "=================================================\n" << endl;
    }
    
    return 0;
}