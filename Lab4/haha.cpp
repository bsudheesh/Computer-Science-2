#include"haha.h"
using namespace std;
void add_elements(NodePtr& head, int number)
{
	NodePtr temp_ptr; //Setting a temporary pointer
	temp_ptr->n=number;
	temp_ptr->link=head; //links to the head of the Linked List
	head=temp_ptr;//head is set as the temporary pointer
}
