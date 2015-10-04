#include"haha.h"
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	NodePtr head;
	head = new haha;
	infile input_stream;
	int n;
	input_stream.open("haha.txt");
	while(!input_stream.eof())
	{
		input_stream>>n;
		add_elements(head,n);
	}
	NodePtr iter;
	iter= new haha;
	for(iter=head;iter!=NULL;iter=iter->link) //loop through all the elements in linked list
		cout<<iter->n<<" ";
	cout<<endl;
	return 0;
}
