#include "SimpleList.h"
#include "Node.h"

SimpleList::~SimpleList()
{
	Node* temp;
	temp = head;
	while (head != NULL)
	{
		Node* temp = head;
		head = temp->next;
		delete temp;
	}
}

void SimpleList::QueueItem(int newValue)        
{
	Node* temp = new Node;             
	temp->value = newValue;
	temp->next = NULL;

	if (head == NULL) // Empty List
	{
		head = tail = temp;
	}
	else
	{
		tail->next = temp;
		tail = temp;
	}
	cout << "Queued Item" << endl;
}

int SimpleList::DequeueItem()
{
	// Is empty?
	if (head == NULL)
		return -1;

	Node* temp = head;
	head = temp->next; 

	// Set the new head to maintain the list
	// even if the next it is NULL (empty)
	if (head == NULL)
		tail = NULL;

	int nReturn = temp->value;
	delete temp;

	cout << "Dequeued Node" << endl;
	return nReturn;
}


void SimpleList::Push(int val)
{
	Node* temp = new Node;
	temp->value = val;
	temp->next = NULL;

	if (head == NULL) // Empty List
	{
		head = tail = temp;
	}
	else
	{
		tail->next = temp;
		tail = temp;
	}
	cout << "Pushed onto stack" << endl;
}


int SimpleList::Pop()
{
	if (head == NULL)
		return -1;

	Node* temp = head;
	head = temp->next;

	// Set the new head to maintain the list
	// even if the next it is NULL (empty)
	if (head == NULL)
		tail = NULL;

	int nReturn = temp->value;
	delete temp;

	cout << "Popped off stack" << endl;
	return nReturn;
}