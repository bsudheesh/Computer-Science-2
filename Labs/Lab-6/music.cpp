#include<iostream>
#include<string>
#include"media.h"
#include"music.h"
using namespace std;
music::music()
{
	music_length_index = 0;
}
void music::ini_music()
{
	int i=0;	
	while (music_length_index<10)
	{		
		music_title[music_length_index] = media_title[i++];
		music_length[music_length_index] = media_length[i++];
		music_length_index++;
	}
}
void music::display()
{
	for(int i=0;i<10;i++)
		cout<<"Song : "<<music_title<<" "<<music_length<<endl;

}
