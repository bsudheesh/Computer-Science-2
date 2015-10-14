#include "student.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	
	Student a_student[10];

	ifstream a;
	a.open("student.txt");
	if(a.fail())
	{
		cout<<"FAIL";
		exit(1);
	}
	string fn,ln,l;
	int num,i=0;
	float gpa;
	while(!a.eof())
	{
		a>>fn;
		a>>ln;
		l=fn+" "+ln;
		a_student[i].name=l;
		a>>num;
		a_student[i].id=num;
		a>>gpa;
		a_student[i].GPA=gpa;
		a_student[i].printStudent();
		i++;
	}
	a.close();
	sortStudentArrayGPA(a_student, i);
	printStudents(a_student, i);
	system("pause"); // Only necessary if using Visual Studio
	return 0;

	system("pause"); // Only necessary if using Visual Studio
	return 0;
}
