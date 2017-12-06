#pragma once
#include "tvector.h"
#include "intlinkedlist.h"

template <typename T>
class Que
{
private:
	
	intLinkedList list;

public:
	
	intLinkedListNode* head;
	
	bool Que::empty() const
	{
		return head == nullptr;
	}
	
	inline size_t Que<T>::size() const
	{
		int counter
			intQue* iter = head;
		while (iter != nullptr)
		{
			counter++;
			iter = iter->next;
		}
		return counter;
	}

	//push
	//pop
	// - return the thing that was popped
	//front
	//- access top of the Queue


};
