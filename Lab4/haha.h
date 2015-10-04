#include<iostream>
using namespace std;
struct haha
{
	int n;
	haha* link; //pointer that connects to its next item in Linked List
};
typedef haha* NodePtr;
void add_elements(NodePtr& head,int number); //Function used to add elements from the file
