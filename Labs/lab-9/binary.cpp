#include<iostream>
#include"binary.h"
using namespace std;
node* GetNewNode(int number)
{
	node* newNode = new node();
	newNode->data = number;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode; //returning the node address of the new node
}
node* add_elements(NodePtr& root,int number)
{
	if(root == NULL)
		root = GetNewNode(number); //if root is NULL, we create a new node 
	else if(number <= root->data)
		root->left = add_elements(root->left,number); //if the number is less than that at the root value, we assign the left branch to add the number
	else 
		root->right = add_elements(root->right,number); //if the number is greater than that at the root value, we assign the right branch to add the number
	return root;
}
void preorder(node* root)
{
	if(root==NULL)
		return;
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
	
}
void inorder(node* root)
{
	if(root==NULL)
		return;	
	inorder(root->left);
	cout<<root->data<<" ";
	preorder(root->right);
}
void postorder(node* root)
{
	if(root==NULL)
		return;	
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
}
node* delete_node(node* root, int number)
{
	if(root == NULL) //if root is null
		return root; 
	else if(number < root->data) 
		root->left = delete_node(root->left,number);
	else if (number > root->data)
		root->right = delete_node(root->right,number);
	//after the number is found
	else
	{
		if((root->left == NULL) && (root->right == NULL)) //if both left and right branch are null, i.e., it is a leaf node
		{ 
			delete root;
			root = NULL;
		}
		else if(root->left == NULL) //if the node has only one child, left
		{
			node* temp;
			temp = root;
			root = root->right;
			delete temp;
		}
		else if(root->right == NULL) //if the node has only one child, right
		{
			node* temp = root;
			root = root->left;
			delete temp;
		}
		else
		{ 
			node* temp;
			temp = FindMin(root->right); //find the minimun value
			root->data = temp->data; //set the root value as the temp value
			root->right = delete_node(root->right,temp->data); //go a recursive call passing the right branch and temp value
		}
	}
	return root;
}
node* FindMin(node* root) //returns the node address of the minimum value
{
	while(root->left!=NULL)
		root=root->left;
	return root;
		
}
//returns the node of the number whose ancestor needs to be found
node* search(node* root, int number)
{
	if(root == NULL)
		return NULL;
	else if (root->data == number) 
		return root;
	else if(root->data < number) 
		return search(root->right,number);
	else 
		return search(root->left,number);
}
//prints the ancestor
void print_ancestor(node* root, int number)
{
	node* current = search(root, number); //current is set as the pointer to the node to be found
	if(current==NULL)
		cout<<"\nNumber not found\n";
	else
	{
		cout<<"\nThe ancestors are : ";
		if(number==root->data) //if value is at the root node, return the value at root node
		{
			cout<<root->data;
			return;
		}		
		else
		{
			node* ancestor = root; //create a node pointing at the root
			while(ancestor != current) //while ancestor is not equal to the current, i.e., number to be found
			{
				cout<<ancestor->data<<" "; //print the ancestor
				if(current->data < ancestor->data)
					ancestor = ancestor->left;
				else
					ancestor = ancestor->right;				
			}
		}
	}
	cout<<endl;
}
//prints the common ancestor
void common_ancestor(node* root, node* node1, node* node2)
{
	node* ancestor_node1 = root; //
	node* ancestor_node2 = root;
	cout<<"\nThe common ancestor of two numbers are : ";
	while((ancestor_node1!=node1)&&(ancestor_node2!=node2))
	{
		if ((ancestor_node1->data==ancestor_node2->data))
			cout<<ancestor_node1->data<<" ";
		else if((node1->data < ancestor_node1->data))
			ancestor_node1 = ancestor_node1->left;
		else if((node2->data < ancestor_node2->data))
			ancestor_node2 = ancestor_node2->left;
		else if((node1->data > ancestor_node1->data))
			ancestor_node1 = ancestor_node1->right;
		else if ((node2->data > ancestor_node2->data))
			ancestor_node2 = ancestor_node2->right;
	}
	cout<<endl;
}
