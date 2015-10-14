#include<iostream>
#include <string>
using namespace std;
class Student
{
	public:
		string fn,ln,t;
		int id;
		float GPA;
		void printStudent();//For printing the members of student
		//Fuction that initilalizes the name, id and gpa
		void ini(string n, int i, float g)
		{
			t = n;
			id = i;
			GPA = g;
		
		}
		//function that returns the name
		string getName()
		{
				return t;
		}
		//function that returns the id
		int getId()
		{
			return id;
		}
		//function that returns the GPA
		float getGPA()
		{
			return GPA;
		}
};
