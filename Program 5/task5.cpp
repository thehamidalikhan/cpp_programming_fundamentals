
#include <iostream>
using namespace std;

int main()
{
    string first_name;
	string last_name;   
    int roll_number;
    int programming_fundamentals, english, mathematics, physics, ict;

    cout << "\nEnter First Name: ";
	cin >> first_name;
    cout << "Enter Last Name: ";
	cin >> last_name;
	string student_name = first_name + " " + last_name;
    
    cout << "Enter Roll Number: ";
	cin >> roll_number;
    
    cout << "Enter Programming Fundamentals Marks: ";
	cin >> programming_fundamentals;
		
	cout << "Enter English Marks: ";
	cin >> english;	

	cout << "Enter Mathematics Marks: ";
	cin >> mathematics;
		
	cout << "Enter Physics Marks: ";
	cin >> physics;
			
	cout << "Enter ICT Marks: ";
	cin >> ict;

    int total_marks = 500;
	int student_total = programming_fundamentals + english + mathematics + physics + ict;
    float percentage = ( student_total * 100.0 ) / total_marks;
	
    int total_classes, attended_classes;
    cout << "Enter Number Of Total Classes: ";
    cin>> total_classes;
    cout << "Enter Number Of Classes Attended: ";
    cin>> attended_classes;

    float attendance_percentage = ( attended_classes * 100.0 ) / total_classes;
    
    cout << "\n\n\n=================================================" << endl;
    cout << "\tABDUL WALI KHAN UNIVERSITY MARDAN" << endl;
    cout << "\t DEPARTMENT OF COMPUTER SCIENCE" << endl;
    cout << "=================================================" << endl;
    cout << "\tSCHOLARSHIP ELIGIBILITY SYSTEM" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "Student Name : " << student_name << endl;
    cout << "Roll Number : " << roll_number << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "\t    ACADEMIC RECORD" << endl;
    cout << "\nProgramming Fundamentals  \t\t: "<< programming_fundamentals << endl;
    cout << "English  \t\t\t\t: "<< english << endl;
    cout << "Mathematics \t\t\t\t: "<< mathematics << endl;
    cout << "Physics  \t\t\t\t: "<< physics << endl;
    cout << "ICT \t\t\t\t\t: " << ict << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "Total Marks \t\t\t        : " << student_total << "/" << total_marks << endl;
    cout << "Percentage \t\t\t        : " << percentage <<"%" << endl;
    cout << "-------------------------------------------------" << endl;
   
    cout << "\t    ATTENDANCE RECORD" << endl;
    
    cout << "\n\nInitial Total Classes\t\t\t: " << total_classes << endl;
    cout << "\nInitial Attended Classes\t\t: " << attended_classes << endl;
    cout << "Attendance Percentage\t\t\t: " << attendance_percentage << "%" << endl;
    
    cout << "\n\nAttendance After Update" << endl;
    total_classes++;
    total_classes++;

    attended_classes++;
    attended_classes++;
    cout << "\nTotal Classes\t\t\t\t: " << total_classes << endl;
    cout << "Attended Classes\t\t\t: " << attended_classes << endl;

    attendance_percentage = ( attended_classes * 100.0 ) / total_classes;
    cout << "Attendance Percentage\t\t\t: " << attendance_percentage << "%" << endl;

    cout << "\n\nAttendance After Correction" << endl;
    attended_classes--;

    cout << "\nTotal Classes\t\t\t\t: " << total_classes << endl;
    cout << "Attended Classes\t\t\t: " << attended_classes << endl;

    attendance_percentage = ( attended_classes * 100.0 ) / total_classes;
    cout << "Attendance Percentage\t\t\t: " << attendance_percentage << "%\n" << endl;
    cout << "=================================================\n" << endl;

    if ( attendance_percentage >= 75 )
    {
        if ( percentage >= 85)
        {
            cout << "You Are Eligible For 'Full Scholarship'\n" << endl;
        }
        else if ( percentage >= 75 )
        {
            cout << "You Are Eligible For 'Half Scholarship'\n" << endl;
        }
        else
        {
           cout << "You Are Not Eligible For Scholarship\n" << endl;
        }
    }
        else
        {   
            cout << "You Are Not Eligible For Scholarship \nDue To Low Attendance\n" << endl;     
        }
     cout << "=================================================\n" << endl;

    return 0;
}
