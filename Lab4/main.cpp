#include<iostream>
#include<fstream>
#include"student.h"
using namespace std;
int main()
{
	student stud;
	NodePtr head, iter, iter1, ptr, loc, loc1, loc2;
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
