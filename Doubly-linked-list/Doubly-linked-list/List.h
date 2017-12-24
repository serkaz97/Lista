#pragma once
struct node
{
	int key;
	int data;
	node* next;
	node* prev;
}*head, *tail;
class List
{
public:
	List();
	~List();
	node* CreateNode(int, int);
	void InsertNode(int, int);

};

