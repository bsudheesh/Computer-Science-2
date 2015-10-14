#include <string>
using namespace std;
struct Single
{
  string artist_name;
  string song_title;
  float song_rating;
};
Single song_input();
void output(Single song);
