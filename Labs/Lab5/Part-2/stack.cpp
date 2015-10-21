#include<iostream>
#include<string>
#include"stack.h"
using namespace std;
void stack::Ini(string s)
{
	str=s;
}
bool stack::check_syntax(string s)
{
	int paren_1=0,paren_2=0,brack_1=0,brack_2=0,sem_1=0,sem_2=0;
    for(int i=0;i<str.size();i++)
    {
        if((paren_1==0)&&(str[i]==')'))
        {
            return false;
            break;
        }
        else if((brack_1==0)&&(str[i]==']'))
        {
            return false;
            break;
        }
        else if((sem_1==0)&&(str[i]=='}'))
        {
            return false;
            break;
        }
        else if(str[i]=='{')
            sem_1++;
        else if(str[i]=='}')
            sem_2++;
        else if(str[i]=='(')
            paren_1++;
        else if(str[i]==')')
            paren_2++;
        else if(str[i]=='[')
            brack_1++;
        else if(str[i]==']')
            brack_2++;
        else
            return false;
    }
    if((paren_1==paren_2)&&(brack_1==brack_2)&&(sem_1==sem_2))
        return true;
    else
        return false;
}
