#include<iostream>
#include<string>
#include"mediaque.h"
using namespace std;
media_que::media_que()
{
	total = 0;
	front = -1;
	rear = -1;
}

bool media_que::isEmpty()
{
	if ((rear == -1) || (front == -1))
		return true;
	else
		return false;
}
void media_que::populate(string s, int n)
{
	if (isEmpty())
	{
		front = 0;
		rear = 0;
		media_string[rear] = s;
		media_int[rear] = n;
		total++;
	}
	else
	{
		rear++;
		media_string[rear] = s;
		media_int[rear] = n;
		total++;
	}
}
int media_que::get_size()
{
	return total;
}
void media_que::display(int t)
{
	for (int i = 0;i < t;i++)
	{
		cout << "Media name : " << media_string[i] << ", length is : " << media_int[i] << endl << endl;
	}
}
