#include "iterator.h"

int main()
{
	int a[5] = { 2, 2, 1, 4, 5 };
	Container A(5, a);
	for (auto i = A.createIterator(); !i->isEnd(); i->next())
	{
		std::cout << i->current();
	}
	system("pause");
	return 0;
}
