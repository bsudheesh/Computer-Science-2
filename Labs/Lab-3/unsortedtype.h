#include"itemType.h"
class UnsortedType
{
	public:
			UnsortedType();
			bool IsFull() const;
			int LengthIs() const;
			void RetrieveItem(ItemType& item, bool& found);
			void InsertItem(ItemType item);
			void DeleteItem(ItemType item);
			void ResetItem();
			void GetNextItem(ItemType& item);
	private:
			int length;
			ItemType info[MAX_ITEMS];
			int currentpos;
};
