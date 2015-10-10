#include<iostream>
#include"student.h"
using namespace std;
void student::add_items(NodePtr& head, int the_number)
{
	NodePtr temp;
	temp = new student;
	temp->n = the_number;
	temp->link = head;
	head = temp;
}
void student::sort(NodePtr& head)
{
	NodePtr iter, iter1, ptr;
	for (iter = head; iter != NULL; iter = iter->link)
	{
		for (iter1 = head; iter1 != NULL; iter1 = iter1->link)
		{
			if (iter->n < iter1->n)
			{
				ptr->n = iter->n;
				iter->n = iter1->n;
				iter1->n = ptr->n;
			}
		}
	}
}
void student::print(NodePtr& head)
{
	NodePtr iter;
	for (iter = head; iter != NULL; iter = iter->link)
		cout << iter->n << " ";
}
void del_duplicate(NodePtr& head)
{
	NodePtr iter, iter1, loc1, loc2, ptr, loc, dis, d;
	for (iter = head; iter != NULL; iter = iter->link)
	{
		for (iter1 = head; iter1 != NULL; iter1 = iter1->link)
		{
			if ((iter->n == iter1->n) && (iter->link != iter1->link))
			{
				cout << "\nthe dublicate item to be deleted is " << iter->n;
				loc1 = iter;
				loc2 = iter1;
				ptr = loc2->link;
				iter->link = loc2->link;
				delete loc2->link;
				iter1->link = ptr;
			}
		}

	}


}
