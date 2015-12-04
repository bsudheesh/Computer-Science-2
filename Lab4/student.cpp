#include<iostream>
#include"student.h"
student* head = NULL; //declaring head pointer globally
student* add_elements(int number)
{
	student* temp = new student;	
	if (head == NULL) //head is set as NULL for the first time
	{
		head = temp;
		temp->data = number; 
		temp->next = NULL;	
		return head;
	}
	else 
	{
		student* temp2 = head; //if there is only one elements in linked list
		if (temp2->data > number) 
		{	
			temp->next = temp2;
			head = temp;

		}
		else 
		{
			
			while (temp2->next != NULL && temp2->next->data < number)  
			{
				temp2 = temp2->next;
				if (temp2->next == NULL) 
				{
					temp->data = number;
					temp2->next = temp; 
					temp->next = NULL;
					return head;
				}
			}
			temp->data = number;
			temp->next = temp2->next;
			temp2->next = temp;
		}	
	}
	return head; //returns the head
	
}
void print(student* head)
{
	student* iter= new student;
	for(iter=head;iter!=NULL;iter=iter->next) //loops throught the linked list
		cout<<iter->data<<" ";
	cout<<endl;
}
void delete_duplicates(student* head)
{
	student *slow,*fast,*temp; //points to head at first
	slow=head;
	fast=slow->next;
	while((slow!=NULL)&&(fast!=NULL))
	{
		if(slow->data==fast->data) //if values are same
		{
			temp=fast;
			slow->next=fast->next;
			fast=fast->next;
			delete temp; //deltes the duplicate node
		}
		else
		{
			//values are not same, change the slow and fast pointes
			slow=slow->next;
			fast=fast->next;
		}
	}
}
student* reverse_list(student* head)
{
	student *current,*after,*previous; 
	current=head;
	previous=NULL;
	while(current!=NULL)
	{
		after=current->next;
		current->next=previous;
		previous=current;
		current=after;
	}
	head=previous; //changing the head after the complete reversal of linked list
	return head;//returning the new head
}




		
