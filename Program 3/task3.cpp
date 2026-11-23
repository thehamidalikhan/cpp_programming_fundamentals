#include <iostream>
using namespace std;

int main () 
{
	string first_name;
	string last_name;
	int roll_number , programming_fundamentals , english , mathematics , physics , ict;
    
	cout << "Student result card generator" << endl;
	cout << "Enter First Name: " << endl;
	cin >> first_name;

    cout << "Enter Last Name: " << endl;
	cin >> last_name;
	
    string student_name = first_name + " " + last_name;
	cout << "Enter Roll Number: " << endl;
	cin >> roll_number;
		
	cout << "Enter Programming Fundamentals Marks: " << endl;
	cin >> programming_fundamentals;
		
	cout << "Enter English Marks: " << endl;
	cin >> english;	

	cout << "Enter Mathematics Marks: " << endl;
	cin >> mathematics;
		
	cout << "Enter Physics Marks: " << endl;
	cin >> physics;
			
	cout << "Enter ICT Marks: " << endl;
	cin >> ict;
    
    int total_marks = 500;
	int student_total=programming_fundamentals+english+mathematics+physics+ict;
    int percentage = (student_total*100)/ total_marks;
	
    cout << "====================================================" << endl;
    cout << "\t ABDUL WALI KHAN UNIVERSITY MARDAN" << endl;
    cout << "\t  DEPARTMENT OF COMPUTER SCIENCE" << endl;
    cout << "====================================================" << endl;
    cout << "\t      STUDENT RESULT CARD" << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "Student Name : " << student_name << endl;
    cout << "Roll Number  : " << roll_number << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "Subject \t\t\t\tMarks" << endl;
    cout << "Programming Fundamentals \t\t"<< programming_fundamentals << endl;
    cout << "English \t\t\t\t"<< english << endl;
    cout << "Mathematics\t\t\t\t"<< mathematics << endl;
    cout << "Physics \t\t\t\t"<< physics << endl;
    cout << "ICT\t\t\t\t\t"<< ict << endl;
    cout << "Total Marks \t\t\t\t" << student_total << "/" << total_marks << endl;
    cout << "Percentage\t\t\t\t" << percentage <<"%" << endl;
    cout << "====================================================" << endl;

	return 0;
}