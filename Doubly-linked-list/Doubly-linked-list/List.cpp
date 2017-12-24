#include "List.h"
#include <iostream>



List::List()
{
	head = tail = NULL;
}


List::~List()
{
	head = tail = NULL;
}

node* List::CreateNode(int key, int data)
{
	node* temp = new node;
	temp->key = key;
	temp->data = data;
	temp->next = NULL;
	temp->prev = NULL;
	return temp;
}

void List::InsertNode(int key, int data)
{
	node* p = CreateNode(key, data);

	if (head == NULL)
	{
		head = p;
		head->next = head;
		head->prev = head;
	}
	if (head->next == head && head->prev == head)
	{
		if (p->key > head->key)
		{
			tail = p;
			head->next = tail;
			head->prev = tail;
			tail->next = head;
			tail->prev = head;
		}
		if (p->key < head->key)
		{
			tail = head;
			head = p;
			head->next = tail;
			head->prev = tail;
			tail->next = head;
			tail->prev = head;
		}
	}

}
