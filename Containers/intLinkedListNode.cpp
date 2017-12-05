#include "intlinkedlist.h"
#include <cassert>

intLinkedList::intLinkedList()
	: head(nullptr)
{

}

intLinkedList::~intLinkedList()
{
	intLinkedListNode* iter = head;
	while (iter != nullptr)
	{
		intLinkedListNode* next = iter->next;
		delete iter;
		iter = next;
	}
}

void intLinkedList::append(int value)
{
	intLinkedListNode* newNode = new intLinkedListNode;
	newNode->value = value;
	newNode->next = nullptr;

	if (head == nullptr)
	{
		head = newNode;
	}
	else
	{
		intLinkedListNode* iter = head;
		while (iter->next != nullptr)
		{
			iter = iter->next;
		}

		iter->next = newNode;
	}
}

int intLinkedList::at(int index)
{
	/*int location;
	std::cin >> location;
	return location;*/

	intLinkedListNode* iter = head;
	int iterationCount = 0;
	while (iterationCount != index && iter != nullptr)
	{
		iterationCount++;
		iter = iter->next;
	}

	assert(iter != nullptr);

	return iter->value;
}

//int* intLinkedList::c_ptr() const
//{
//
//	return intLinkedList*;
//}

//size_t intLinkedList::capacity() const
//{
//	capacity = intVector
//	return size_t();
//}

size_t intLinkedList::size() const
{
	int counter = 0;
	intLinkedListNode* iter = head;
	while (iter != nullptr)
	{
		counter++;
		iter = iter->next;
	}
	return counter;
}

bool intLinkedList::empty() const
{
	return head == nullptr;
}

int intLinkedList::front() const
{
	assert(!empty());

		return head->value;
}

int intLinkedList::back() const
{
	assert(!empty());
	intLinkedListNode* iter = head;
	while (iter->next != nullptr)
	{
		iter = iter->next;
	}
	return iter->value;
	
}

void intLinkedList::clear()
{
	intLinkedListNode* iter = head;
	while (iter != nullptr)
	{
		intLinkedListNode* next = iter->next;
		delete iter;
		iter = next;
	}
	head = nullptr;
}

void intLinkedList::Erase() const
{
	int x;

	intLinkedListNode* iter = head;
	while (iter != nullptr)
	{
		intLinkedListNode* next = iter->next;
		delete [x];
		iter = next;
	}
}

/*size_t intLinkedList::AsO() const
{
	while(index)
	{
	
		
		if()
		{
			break;
		}
	}
	return size_t();
}*/
