#include "single.h"
using namespace std;
class UnsortedPlaylist
{
	public:
			void initialize();
			void add(Single new_song);
			int get_length();
			int max_length();
			bool Listfull();
			Single getSingle(int index);
			void deleteSingle();
	private:
			Single* songs;
			int current;
			int length;
			int max_songs;
};
