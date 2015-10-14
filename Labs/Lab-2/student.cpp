#include<iostream>
#include "student.h"
using namespace std;
void Student::printStudent()
{
	cout << "Name: " <<	t << endl;
	cout << "ID: "  << id << endl;
	cout <<  "GPA: " << GPA << endl << endl;
}
void sortStudentArrayGPA(Student arr[], int n)
{
	cout<<"\Now sorting array\n"; 
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
