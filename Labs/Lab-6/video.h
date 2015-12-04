#include<iostream>
class video : public media
{
public:
	video();
	void ini_video();
	virtual void display();
private:
	string video_title[10];
	int video_length[10];
	int video_length_index;

};
