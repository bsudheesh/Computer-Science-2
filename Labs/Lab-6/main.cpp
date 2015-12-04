#include<iostream>
#include<string>
#include<fstream>
#include<ctime>
#include<cstdlib>
#include"media.h"
#include"mediaque.h"
#include"music.h"
#include"video.h"
using namespace std;
int main()
{
	srand(time(NULL));
	string str;
	int n;
	media media_object;
	video video_object;
	media_que mediaque_object;
	music music_object;
	ifstream music_stream, video_stream;
	music_stream.open("song.txt");
	video_stream.open("video.txt");
	while ((music_stream >> str) && (music_stream >> n))
		media_object.ini(str, n);	
	while ((video_stream >> str) && (video_stream >> n))
		media_object.ini(str, n);		
	cout << "\nDisplaying \n";
	media_object.display();
	cout << "\nNow storing the value from media to music\n";
	music_object.ini_music();
	cout << "\nNow displaying the value from music\n";
	music_object.display();
	cout << "\nNow storing the value from media to video\n";
	video_object.ini_video();
	cout << "\nNow displaying the value from video\n";
	video_object.display();
	cout << endl;
	cout << "\nNow going through the queue \n";
	music_stream.close();
	video_stream.close();
	music_stream.open("song.txt");
	video_stream.open("video.txt");
	char ch;
	int r,count_loop=0;
	do
	{
		cout << "Enter your choice : ";
		cin >> ch;
		r = rand() % 100 + 1;
		if (r %2==0)
		{
			cout << "\nImporting from Music text\n";			
			music_stream >> str;
			music_stream >> n;
			mediaque_object.populate(str, n);
		}
		else
		{	
			music_stream >> str;
			music_stream >> n;
			cout << "\nImporting from Video text\n";
			video_stream >> str;
			video_stream >> n;
			mediaque_object.populate(str, n);
		}
		count_loop++;
	} while ((ch == 'y') || (ch == 'Y'));
	cout << "\nDisplaying the que\n";
	int t;
	t = mediaque_object.get_size();
	
	mediaque_object.display(t);
	cout << endl;
	music_stream.close();
	video_stream.close();


	system("pause");
	return 0;
}

