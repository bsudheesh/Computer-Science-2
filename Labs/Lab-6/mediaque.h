#include<iostream>
#include<string>
using namespace std;
class media_que
{
public:
	media_que();
	int get_size();
	bool isEmpty();
	void populate(string s, int n);
	virtual void display(int t);
private:
	string media_string[20];
	int media_int[20];
	int front;
	int rear;
	int total;
};
