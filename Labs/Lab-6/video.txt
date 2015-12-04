#include<iostream>
#include<string>
#include"media.h"
#include"video.h"
video::video()
{
	video_length_index = 10;

}
void video::ini_video()
{
	int max = 0;
	while (video_length_index<20)
	{
		video_title[max] = media_title[video_length_index];
		video_length[max] = media_length[video_length_index];
		video_length_index++;
		max++;
	}
}
void video::display()
{
	for(int i=0;i<10;i++)
	{
		cout<<"Video : "<<video_title<<" "<<video_length<<endl;
	}
}
