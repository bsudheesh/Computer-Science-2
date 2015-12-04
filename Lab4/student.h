#include<iostream>
using namespace std;
struct student
{
	int data;
	student* next;
};
student* add_elements(int number); //function that adds elements and returns the head
void print(student* head); //function that prints the linked list
void delete_duplicates(student* head); //function that deletes the duplicates
student* reverse_list(student* head); //function that reverses the linked list
