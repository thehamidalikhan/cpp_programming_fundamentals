#include<iostream>
using namespace std;

int main ()
{
    string first_name;
    string last_name;
    string vehicle_number;
    string vehicle_name;
    int vehicle_type;
    int parking_hours;
    int category;
    int charges_per_hour;
    int total_charges;
    int discount = 0;
    int discount_value;
    int total_payable;
    int initially_parked = 60;
    int available_spaces = 40;

    cout << "\n=================================================" << endl;
    cout << "\tABDUL WALI KHAN UNIVERSITY MARDAN" << endl;
    cout << "\t  DEPARTMENT OF COMPUTER SCIENCE" << endl;
    cout << "=================================================" << endl;
    cout << "\t    UNIVERSITY PARKING SYSTEM" << endl;
    cout << "-------------------------------------------------\n" << endl;
    
    cout << "Enter Your First Name     : ";
    cin >> first_name;
    cout << "Enter Your Last Name      : ";
    cin >> last_name;
    string name = first_name + " " + last_name;   
    
    cout << "Enter Your Vehicle Number\nIn This Format (ABC-123)  : ";
    cin >> vehicle_number;

    cout << "\n--------------------------------------------------\n" << endl;
    cout << "1.  Motorcycle\t : Rs. 20 / Hour" << endl;
    cout << "2.  Car\t         : Rs. 50 / Hour" << endl;
    cout << "3.  Van\t         : Rs. 80 / Hour" << endl;
    cout << "4.  Bus\t         : Rs. 150 / Hour" << endl;
    cout << "\n--------------------------------------------------" << endl;
    
    cout << "\nEnter Vehicle Type  : ";
    cin >> vehicle_type;

    switch (vehicle_type)    
    {
        case (1):
            vehicle_name = "Motorcycle";
            charges_per_hour = 20;
            break;

        case (2):
            vehicle_name = "Car";
            charges_per_hour = 50;
            break;

        case (3):
            vehicle_name = "Van";
            charges_per_hour = 80;
            break;

        case (4):
            vehicle_name = "Bus";
            charges_per_hour = 150;
            break;

        default:
            cout << "Invalid Vehicle Type Selection" << endl;
    }
    
    if  ((vehicle_type >= 1) && (vehicle_type <=4))
    {
            cout << "Enter Parking Hours : ";
            cin >> parking_hours;
            cout << "\n--------------------------------------------------\n";
            cout << "\n1.  Student" << endl;
            cout << "2.  Faculty member" << endl;
            cout << "3.  Visitor" << endl;
            cout << "\nSelect your category : ";
            cin >> category;

            total_charges = charges_per_hour * parking_hours;

    switch (category)
    {
        case (1):
            discount = 30;
            break;

        case(2):
             discount = 20;
            break;

        case(3):
            discount = 0;
            break;

        default:
            cout << "invalid Category Selection" << endl;
    }

    if  ((category >= 1) && (category <= 3))
    {
            discount_value = (total_charges * discount) / 100; 
            total_payable = total_charges - discount_value;
            initially_parked++;
            available_spaces--;

            cout << "\n\n================PARKING RECEIPT===================\n\n";  
            cout << "Name               : " << name << endl;
            cout << "Vehicle Number     : " << vehicle_number << endl;
            cout << "Vehicle Type       : " << vehicle_name << endl;
            cout << "Parking Hours      : " << parking_hours << endl;
            cout << "Charges Per Hour   : " << charges_per_hour << endl;
            cout << "Total Parking Fee  : " << total_charges << endl;
            cout << "Discount "<<"("<<discount<<"%"<<")     : "<<discount_value<<endl;
            cout << "Total Payable      : " << total_payable << endl;
            cout << "\n--------------------------------------------------\n";  
            cout << "Initially Parked   : " << "60" << endl;
            cout << "Currently Parked   : " << initially_parked << endl;
            cout << "Available Spaces   : " << available_spaces << endl;
            cout << "\n==================================================\n";  
            cout << "         THANK YOU FOR USING OUR PARKING";  
            cout << "\n==================================================\n";  
    }
    }
    return 0;   
}