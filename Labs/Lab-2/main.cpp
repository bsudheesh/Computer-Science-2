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
		stu.stud[i] = stu;
		i++;
	};
	a.close();
	sortStudent(depart.stud,num); 
	printstudent(depart.stud,num);
	cout << "Now for Graduate students \n";
	while (!b.eof())
	{
		gradStudent gstud;
		gstud.full_name = fn + ln;
		gstud.id = id;
		gstud.GPA = gpa;
		gstud.research_area = Research;
		depart.gstudArray[ii] = gstud;
		ii ++;
	};
	b.close();
	sortgradstudent(depart.gstud,num);
	printgradstudent(depart.gstud,num);



	system("pause"); // Only necessary if using Visual Studio
	return 0;

	system("pause"); // Only necessary if using Visual Studio
	return 0;

}
