/** @file ListA.h */

const int MAX_LIST = 100;
typedef int ListItemType;

class List
{
public:
   List();
   bool isEmpty() const;
   int getLength() const;
   void insert(int index, const ListItemType& newItem, bool& success);  
   void remove(int index, bool& success);
   void retrieve(int index, ListItemType& dataItem, bool& success) const;

private:
   ListItemType items[MAX_LIST];
   int          size;
   int translate(int index) const;
};
