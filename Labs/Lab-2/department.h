#include<iostream>
#include "student.h"
#include "gradStudent.h"
struct department
{
	public:
		Student stud[15];
		gradStudent gradstud[15];
		void printGrad();
};
void printstudent(Student stu[], int num);
void sortStudent(Student stu[], int num);
void printgradstudent(gradStudent gstu[], int num);
void sortgradstudent(gradStudent gstu[], int num);	
