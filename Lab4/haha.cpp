#include"haha.h"
using namespace std;
void add_elements(NodePtr& head, int number)
{
	NodePtr temp_ptr;
	temp_ptr->n=number;
	temp_ptr->link=head;
	head=temp_ptr;
}
