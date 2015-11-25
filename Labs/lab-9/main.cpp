#include<iostream>
#include<fstream>
#include"binary.h"
using namespace std;
int main()
{
	typedef node* NodetPtr;
	NodePtr root;
	root = new node;
	root=NULL;
	ifstream infile;
	int number,number_deleted,number_added,ancestor,number_node1, number_node2;
	infile.open("binary.txt");
	cout<<"\nAdding the elements\n";
	while(!infile.eof())
	{
		infile>>number;
		root=add_elements(root,number);
	}
	cout<<"\nPrinting in preoder\n";
	preorder(root);
	cout<<"\nPrinting in inorder\n";
	inorder(root);
	cout<<"\nPrinting in post-order\n";
	postorder(root);
	cout<<"\nEnter the number to be deleted : ";
	cin>>number_deleted;
	root=delete_node(root,number_deleted);
	cout<<endl;
	cout<<"\nPrinting in inorder to see the number deleted\n";
	inorder(root);
	cout<<"\nEnter the number to be added : ";
	cin>>number_added;
	add_elements(root,number_added);
	cout<<"\nPrinting in inorder to see the number deleted\n";
	inorder(root);
	cout<<"\nEnter the number whose ancestor is to be found : ";
	cin>>ancestor;
	print_ancestor(root,ancestor);
	cout<<"\nEnter the first number whose common ancestor is to be found : ";
	cin>>number_node1;
	cout<<"\nEnter the second number whose common ancestor is to be found : ";
	cin>>number_node2;
	node* temp1 = search(root,number_node1);
	node* temp2= search(root,number_node2);
	cout<<"\nNow finding the common ancestor\n";
	common_ancestor(root,temp1,temp2);
	system("pause");
	return 0;
}
