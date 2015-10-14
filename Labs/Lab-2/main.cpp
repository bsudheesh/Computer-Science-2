#include<iostream>
#include <fstream>
#include <string>
#include "student.h"
#include "department.h"
#include "gradStudent.h"
using namespace std;
int main()
{
	department dept;
	string fn,ln,t,reas;
	int id,i=0,ii=0;
	float gpa; 
	ifstream a,b;
	a.open("student.txt");
	b.open("gradstudent.txt");
	while (!a.eof())
	{
		Student stu;
		t=fn+ln;
		stu.t = t;
		stu.id = id;
		stu.GPA = gpa;
		dept.stud[i] = stu;
		i++;
	};
	a.close();
	sortStudent(dept.stud,i); 
	printstudent(dept.stud,i);
	cout << "Now for Graduate students \n";
	while (!b.eof())
	{
		gradStudent gstud;
		gstud.full_name = fn + ln;
		gstud.id = id;
		gstud.GPA = gpa;
		gstud.research = reas;
		dept.gradstud[ii] = gstud;
		ii ++;
	};
	b.close();
	sortgradstudent(dept.gradstud,ii);
	printgradstudent(dept.gradstud,ii);



	system("pause"); // Only necessary if using Visual Studio
	return 0;

	system("pause"); // Only necessary if using Visual Studio
	return 0;

}
