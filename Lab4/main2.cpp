#include<iostream>
#include<fstream>
#include"student.h"
using namespace std;
void add(NodePtr& head, int the_number);
void del_duplicate(NodePtr& head);

int main()
{
	
	
	NodePtr head,iter,iter1,ptr,loc,loc1,loc2;
	iter1=new student;
	head=new student;
	iter= new student;
	loc=new student;
	iter1= new student;
	ptr= new student;
	loc1=new student;
	loc2=new student;
	int num,length=0;
	ifstream input;
	input.open("student.txt");
	input>>num;
	head->n=num;
	head->link=NULL;
	while(!input.eof())
	{
		input>>num;
		add(head,num);
		length++;		
	}
	
	cout<<"\nNow sorting the Linked list \n";
	for(iter=head;iter!=NULL;iter=iter->link)
	{
		for(iter1=head;iter1!=NULL;iter1=iter1->link)
		{
			if(iter->n < iter1->n)
			{
				
				ptr->n=iter->n;
				iter->n=iter1->n;
				iter1->n=ptr->n;
			}
		}
	}
	cout<<"\nPrinting\n";
	for(iter=head;iter!=NULL;iter=iter->link)
		cout<<iter->n<<" ";
	cout<<"\nNow removing the Duplicate \n";
	del_duplicate(head);
	int aa;
	
	cout<<"\nPrinting\n";
	for(iter=head;iter!=NULL;iter=iter->link)
		cout<<iter->n<<" ";


	
	input.close();
	system("pause");
	return 0;
}
void add(NodePtr& head, int the_number)
{
	NodePtr temp;
	temp=new student;
	temp->n=the_number;
	temp->link=head;
	head=temp;
}
void del_duplicate(NodePtr& head)
{
	NodePtr iter,iter1,loc1,loc2,ptr,loc,dis,d;
	iter1=new student;
	iter= new student;
	iter1= new student;
	ptr= new student;
	loc1=new student;
	loc2=new student;
	loc=new student;
	dis=new student;
	d=new student;
	for(iter=head;iter!=NULL;iter=iter->link)
	{
		for(iter1=head;iter1!=NULL;iter1=iter1->link)
		{
			if((iter->n == iter1->n)&&(iter->link!=iter1->link))
			{
				
				cout<<"\nthe dublicate item to be deleted is "<<iter->n;
				loc1=iter->link;
				loc2=iter1->link;
				ptr=loc2->link;
				iter1->link=ptr->link;
				delete loc2->link;

				
			}
		}
		
	}

	
}
