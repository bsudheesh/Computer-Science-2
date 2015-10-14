#include <fstream>
#include "unsortedplaylist.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
  UnsortedPlaylist class_obj; //creating object for unsortedplaylist
  class_obj.initialize();
  Single song;
  ifstream input;
  ofstream output;
  input.open("favSongs.txt");
  output.open("tempSongs.txt",ios::app); //ios::app so that it doesn't rewrites the item in files
  while (!class_obj.full())
  {
        if (class_obj.length() < 5) //Checking to see if the length is less than 5
        {
			input >> song.artist_name;
			input >> song.song_title;
			input >> song.song_rating;
			output << song.artist_name;
			output << song.song_title;
			output << song.song_rating;
			class_obj.add(song);
        }
        else
        {
			 song = song_input();
			class_obj.add(song);
			output << song.artist_name;
			output << song.song_title;
			output << song.song_rating;
        }
   }
  input.close();
  output.close();
  class_obj.deleteSingle();
  return 0;
}
