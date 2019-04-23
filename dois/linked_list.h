#ifndef LINKED_LIST_H
#define LINKED_LIST_H

struct Node{
	Node();
	float info;
	Node* next;
};

struct LinkedList{
	Node* head;
	void insert_front(float info);
	void print();
	LinkedList();
	~LinkedList();
};

#endif
