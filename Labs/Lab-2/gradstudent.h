#include<iostream>
#include "student.h"
class gradStudent:public Student //Inherties the public members of class Student
{
	public:
		string research,full_name;
		int id;
		float GPA;
		void printgradStudent();
		void ini(string n, int i, float g, string r) //Initiliazes name, id, gpa and reasearch
		{
			full_name = n;
			id = i;
			GPA = g;
			research = r;
		}
		string getresearch()//returns the reasearch area
		{
			return research;
		}
};

