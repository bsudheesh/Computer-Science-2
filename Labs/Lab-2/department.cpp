#include <iostream>
#include<string>
#include "department.h"
#include "student.h"
using namespace std;
void printstudent(Student stu[], int num)
{
	for (int i = 0; i < num; i++)
	{
	
		stu[i].printStudent();
	}
}
void sortStudent(Student stu[], int num)
{
	 int minIndex = 0; 
	  int startIndex = 0;
	  for (startIndex; startIndex < num; startIndex++)
	  {
		   minIndex = startIndex;
		  for (int studentIndex = 0; studentIndex < n; studentIndex++)
		  {
			  if (stu[studentIndex].GPA < stu[minIndex].GPA)
			  {
				  Student temp = stu[minIndex];
				  stu[minIndex] = stu[studentIndex];
				  stu[studentIndex] = temp;
			  }
		  }
	  };
}
void sortgradstudent(gradStudent gstu[], int num)
{
	 int minIndex = 0; 
	  int startIndex = 0;
	  for (startIndex; startIndex < num; startIndex++)
	  {
		   minIndex = startIndex;
		  for (int studentIndex = 0; studentIndex < num; studentIndex++)
		  {
			  if (gstu[studentIndex].GPA < gstu[minIndex].GPA)
			  {
				 gradStudent temp = gstu[minIndex];
				  gstu[minIndex] = gstu[studentIndex];
				  gstu[studentIndex] = temp;
			  }
		  }
	  };
}
void printgradstudent(gradStudent gstu[], int num)
{
	for (int i = 0; i < num; i++)
	{
		cout << " " <<endl;
		gstu[i].printgradStudent();
	}
}
