#include <iostream>
#include <string>
using namespace std;

typedef int T;

struct node{
	T data;
	node *next;

	node(const T& d = T()):data(d),next(NULL){}
};


class LinkedList{
	int length;
	node *head;

public:
	LinkedList():length(0),head(0){}
	~LinkedList(){destroy();}

	void push_front(const T& d);
	void push_back(const T& d);
	int  getsize();
	void insert(int pos,const T& d);
	node*& getptr(int pos);
	void travel();
	void destroy();


};
