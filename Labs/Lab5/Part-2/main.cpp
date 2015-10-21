#include<iostream>
#include<fstream>
#include<string>
#include"stack.h"
using namespace std;
int main()
{
    stack stack1;
	bool answer;
	ifstream input;
	input.open("stack.txt");
	string ch;
	while(!input.eof())
	{
		while(input>>ch)
		{
			stack1.Ini(ch);
			answer=stack1.check_syntax(ch);
			if(answer==true)
				cout<<"\nSyntax is correct\n";
			else
				cout<<"\nSyntax is incorrect\n";
		}
	}
	input.close();
	system("pause");
    return 0;
}
