#include<iostream>
#include<string>
#include"media.h"
#include"music.h"
using namespace std;
media::media()
{
	length = 0;
}
void media::ini(string s, int num)
{	
	media_title[length] = s;
	media_length[length] = num;
	length++;
}
void media::display()
{
	for (int i = 0;i<20;i++)
		cout << "Media name is : " << media_title[i] << endl << "Media length is : " << media_length[i] << endl << endl;
}
