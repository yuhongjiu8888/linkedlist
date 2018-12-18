#include "list.h"

int main()
{
	LinkedList l;
	l.push_front(15);
	l.push_front(16);
	l.travel();

	l.push_back(41);
	l.push_back(65);
	l.travel();

	l.insert(1,88);
	l.travel();

	return 0;
}
