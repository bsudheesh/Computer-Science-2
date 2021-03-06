#include<iostream>
using namespace std;
struct node
{
	int data;
	node* left;
	node* right;
};
typedef node* NodePtr;
node* makenode(int number); //makes new node for the number to be inserted
node* add_elements(NodePtr& root,int number); //add elements to the binary search tree
node* delete_node(node* root, int number); //delete nodes to the binary serach tree
void preorder(node* root); //displays the preorder traversal
void inorder(node* root); //displays the inorder traversal
void postorder(node* root); //displays the postorder traversal
node* FindMin(node* root); //finds the minimum and returns the node of the minimum value
node* search(node* root,int number); //searchs the node and returns the node of the number found
void print_ancestor(node* root, int number); //prints the ancestor
void common_ancestor(node* root, node* node1, node* node2);//prints the common ancestor. takes the node address of first number as node 1 and node 2 for the second number
