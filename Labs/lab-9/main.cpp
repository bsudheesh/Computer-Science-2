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
	int number,number_deleted,number_added,ancestor;
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
	cout<<"\nEnter the number whose successor is to be found : ";
	cin>>ancestor;
	print_ancestor(root,ancestor);
	cout<<endl;
	system("pause");
	return 0;
}


	
