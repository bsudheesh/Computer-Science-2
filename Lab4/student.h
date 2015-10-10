#pragma once
#include<iostream>
using namespace std;
struct student
{
	int n;
	student* link;
	
	void add_items(NodePtr& head, int the_number);
	void sort(NodePtr& head);
	void del_duplicate(NodePtr& head);
	void print(NodePtr& head);
};
typedef student* NodePtr;
