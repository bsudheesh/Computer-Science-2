#include<iostream>
#include<string>
using namespace std;
class media
{
	public:
		media();
		virtual void display();
		void ini(string s, int num);
	protected:
		string media_title[20];
		int media_length[20];
		int length;

};
