#include <iostream>
using namespace std;

int main()
{
    
    int total_students, present_students, absent_students;

    cout << "\n=========================================" << endl;
    cout << "\tStudent Attendance System" << endl;
    cout << "=========================================" << endl;
   
    cout << "Enter Number Of Total Students    : ";
    cin >> total_students;
    
    cout << "Enter Number Of Present Students  : ";
    cin >> present_students; 
    
    cout << "Enter Number Of Absent Students   : ";
    cin >> absent_students;
    
    cout << "-----------------------------------------" << endl;
    cout << "\t Initial Attendance" << endl;
    cout << "-----------------------------------------" << endl;

    cout << "Total Students\t\t\t  : " << total_students << endl;
    cout << "Present Students\t\t  : " << present_students << endl;
    cout << "Absent Students\t\t\t  : " << absent_students << endl;

    cout << "-----------------------------------------" << endl;
    cout << "\t Attendance Updates" << endl;
    cout << "-----------------------------------------" << endl;
    
    cout << "\nUpdate 1 - Student Arrives late" << endl;

    present_students++;
    absent_students--;

    cout << "\nTotal Students\t\t\t  : " << total_students << endl;
    cout << "Present Students\t\t  : " << present_students << endl;
    cout << "Absent Students\t\t\t  : " << absent_students << endl;
     
    cout << "\nUpdate 2 - Another Student Arrives" << endl;
    
    present_students++;
    absent_students--;

    cout << "\nTotal Students\t\t\t  : " << total_students << endl;
    cout << "Present Students\t\t  : " << present_students << endl;
    cout << "Absent Students\t\t\t  : " << absent_students << endl;
    
    cout << "\nUpdate 3 - One Student Leaves" << endl;
    
    present_students--;
    absent_students++;

    cout << "\nTotal Students\t\t\t  : " << total_students << endl;
    cout << "Present Students\t\t  : " << present_students << endl;
    cout << "Absent Students\t\t\t  : " << absent_students << endl;

    float percentage = (present_students * 100.0) / total_students;
    cout << "\n=========================================" << endl;
    cout << "Final Attendance Percentage\t  "<<": "<<percentage<<"%"<<endl;
    cout << "=========================================\n" << endl; 

    return 0;
}