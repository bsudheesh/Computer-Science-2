#include <iostream>
#include <fstream>
#include "single.h"
Single input()
{
	Single song;
	string title, artist;
	cout << "Enter song name:\n";
	cin >> song.title;
	cout << "Enter artist name:\n";
	cin >> song.artist,
	cout << "Enter rating between 0-100:\n";
	cin >> song.rating;
	return song;
}
void output(Single song)
{
	ofstream output_1;
	output_1.open("favSongs.txt");
	output_1 << song.title << song.artist << song.rating;
	output_1.close();
}
