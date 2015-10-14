#include "student.h"
#include <iostream>
using namespace std;
void Student::printStudent()
{
	cout << "Name: " <<	t << endl;
	cout << "ID: "  << id << endl;
	cout <<  "GPA: " << GPA << endl << endl;
}
cout<<"Now sorting array\n";
void sortStudentArrayGPA(Student arr[], int n)
{
	 int minIndex = 0; 
	  int startIndex = 0;
	  for (startIndex; startIndex < n; startIndex++)
	  {
		   minIndex = startIndex;
		  for (int studentIndex = 0; studentIndex < n; studentIndex++)
		  {
			  if (arr[studentIndex].GPA < arr[minIndex].GPA)
			  {
				  Student temp = arr[minIndex];
				  arr[minIndex] = arr[studentIndex];
				  arr[studentIndex] = temp;
			  }
		  }
	  };
}






