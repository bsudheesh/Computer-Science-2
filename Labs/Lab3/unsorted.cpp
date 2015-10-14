#include "unsortedplaylist.h"
#include <iostream>
using namespace std;
void UnsortedPlaylist::initialize()
{
	cout << "Number of songs in the Playlist?";
	cin >> max_songs;
	songs = new Single[max_songs];
	current = 0;
	length = 0;
}
void UnsortedPlaylist::add(Single new_song) 
{
	songs[length] = new_song;
	length++;
}
int UnsortedPlaylist::get_length() 
{
	return length;
}
bool UnsortedPlaylist::Listfull() 
{
	return (length == max_songs);
}
Single UnsortedPlaylist::getSingle(int index) 
{
	return songs[index];
}
void UnsortedPlaylist::deleteSingle()
{
	Single song;
	char reply; 
	for (int i=0; i<max_songs; i++)
	{
		song = getSingle(i);
		cout <<"Delete this song? Press Y for yes or N for No\n";
		cout <<"Artist: "<<song.artist<<endl;
		cout <<"Title: "<<song.title<<endl;
		cin >> reply;
		if (reply == 'y' || reply == 'Y')
		{
			for (int j=i+1; j < max_songs; j++)
			{
				songs[j-1] = songs[j];
			}
			max_songs--;
		}
	}
}

