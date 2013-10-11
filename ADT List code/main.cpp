#include "ListA.h"  // header file
#include <iostream>
using namespace std;

int main()
{	
	List a;
	bool suc;
	a.insert(1,15, suc);
	a.insert(1,35, suc);
	a.insert(1,65, suc);
	a.insert(1,5, suc);
	
	int index;
	for(index=1;index<=a.getLength();index++)
	{	
		int item;
		a.retrieve(index,item,suc);
		cout << item << endl;
	}
	system("pause");
}


