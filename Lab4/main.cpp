#include<iostream>
#include<fstream>
#include"student.h"
using namespace std;
int main()
{
	student* head; //declaring head;
	ifstream input_stream; //deaclaring input stream
	int number,count=0;
	input_stream.open("student.txt"); //opening the file
	cout<<"\nAdding the elements\n";
	while(!input_stream.eof())
	{
		input_stream>>number;
		if(count==0)	
		{
			head=add_elements(number); //for the first value that is added, head is assigned to that node
			count++;
		}
		else
			add_elements(number);

	}
	cout<<"\nNow priting the linked list \n";
	print(head);
	cout<<"\nNow deleting the duplicates\n";
	delete_duplicates(head); //calling the function that deletes the duplicates
	print(head);
	cout<<"\nNow reversing the list\n";	
	head=reverse_list(head); //calling the function that reverses the linked list
	print(head);
	system("pause");
	return 0;
}
