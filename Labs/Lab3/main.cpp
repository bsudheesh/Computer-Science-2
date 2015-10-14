#include <iostream>
#include <string>
#include <fstream>
#include "unsorted.h"
using namespace std;
int main()
{
	UnsortedPlaylist playlist;
	playlist.initialize();
	Single song;
	ifstream input;
	ofstream output;
	input.open("favSongs.txt");
	output.open("favSongs.txt",ios::app);
    while (!playlist.Listfull())
    {
        if (playlist.get_length() < 5)
        {
			input >> song.artist;
			input >> song.title;
			input >> song.rating;
			output << song.artist << " ";
			output << song.title  << " ";
			output << song.rating << " " << endl;
			playlist.add(song);
        }
        else
        {
			song = inputs();
			playlist.add(song);
			output << song.artist;
			output << song.title;
			output << song.rating;
        }
    }
	input.close();
	output.close();
	playlist.deleteSingle();
	return 0;
}
