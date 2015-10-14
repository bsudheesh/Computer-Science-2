#include<iostream>
#include<fstream>
#include"student.h"
using namespace std;
int main()
{
	typedef student* NodePtr;
	student stud;
	NodePtr head;
	head= new student;
	int num, length = 0;
	ifstream input;
	input.open("student.txt");
	input >> num;
	head->n = num;
	head->link = NULL;
	while (!input.eof())
	{
		input >> num;
		stud.add_items(head, num);
		length++;
	}

	cout << "\nNow sorting the Linked list \n";
	stud.sort(head);
	cout << "\nPrinting\n";
	stud.print(head);
	cout << "\nNow removing the Duplicate \n";
	stud.del_duplicate(head);
	cout << "\nPrinting\n";
	stud.print(head);
	input.close();
	system("pause");
	return 0;
}
