#include "list.h"

void LinkedList::push_front(const T& d){
	node *p = new node(d);
	p->next = head;
	head = p;
	++length;
}


void LinkedList::push_back(const T& d){
	insert(getsize(),d);

}

void LinkedList::insert(int pos,const T& d){
	if( pos<0 || pos > length)
		return ;
	node *p = new node(d);
	node*& ptr = getptr(pos);
	p->next = ptr;
	ptr = p;
	++length;
}


int LinkedList::getsize(){
	return length;
}

node*& LinkedList::getptr(int pos){
	if(pos<=0 || pos>length)
		return head;
	node *p = head;
	for(int i = 1; i < pos; i++)
	{
		p = p->next;
	}
	return (*p).next;
}

void LinkedList::destroy(){
	if( head == NULL )
		return ;
	node *p = head;
	for(int i = 0; i < length ; i++ )
	{
		head = p->next;
		delete p;
		p = head;
	}

}

void LinkedList::travel(){
	if( length <= 0 )
		return ;
	node *p = head;
	for(int i = 0; i<length; i++)
	{
		cout<<p->data;
		if(length > i+1)
			cout<<"-->";
		p = p->next;
	}
	cout<<endl;
}
