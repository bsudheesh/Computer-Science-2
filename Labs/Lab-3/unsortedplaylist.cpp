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
int UnsortedPlaylist::max_length() const
{
   return length;
}
bool UnsortedPlaylist::full() const
{
   return (length == max_songs);
}
Single UnsortedPlaylist::getSingle(int index) const
{
   return songs[index];
}
void UnsortedPlaylist::deleteSingle()
{
	Single song;
	char r; 
	for (int i=0; i<max_songs; i++)
	{
		song = getSingle(i);
		cout <<"Delete this?\n";
		cout <<"Artist : "<<song.artist_name<<endl;
		cout <<"Title : "<<song.song_title<<endl;
		cin >> r;
		if (r == 'y' || r == 'Y')
		{
			for (int j=i+1; j < max_songs; j++)
			{
				songs[j-1] = songs[j]; //putting the second element in first
			}
			max_songs--;
		}
	}
}

