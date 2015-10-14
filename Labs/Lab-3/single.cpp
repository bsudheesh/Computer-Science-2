#include "single.h"
#include <iostream>
#include <fstream>
using namespace std;
//this is take inputs from the user
Single getsonginput()
{
  Single new_song;
  string title, artist;
  cout << "Enter song name:\n";
  cin >> new_song.song_title;
  cout << "Enter artist name:\n";
  cin >> new_song.artist_name,
  cout << "Enter rating between 0-100:\n";
  cin >> new_song.song_rating;
  return new_song;
}
//will write to file
void writetofile(Single new_song)
{
  ofstream output_2;
  output_2.open("favSongs.txt");
  output_2 << new_song.song_title << new_song.artist_name << new_song.song_rating;
  output_2.close();
}
