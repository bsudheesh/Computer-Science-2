#include<iostream>
#include<string>
using namespace std;
class music : public media
{
public:

	music();
	void ini_music();
	virtual void display();
private:
	string music_title[10];
	int music_length[10];
	int music_length_index;
};
