#include<iostream>
using namespace std;
struct haha
{
	int n;
	haha* link;
};
typedef haha* NodePtr;
void add_elements(NodePtr& head,int number);
