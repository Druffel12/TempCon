#pragma once

class intLinkedList
{
public:
	struct intLinkedListNode
	{
		int value;
		intLinkedListNode* next;

	};

	intLinkedList();
	~intLinkedList();
	 
	void append(int value);

	int at(int index);
	int* c_ptr() const;
	size_t capacity() const;
	size_t size() const;
	bool empty() const;
	int front() const;
	int back() const;
	//size_t AsO() const;
	void clear();
	void Erase(size_t idx);
	int Count(int value);

	int find();




private:
	intLinkedListNode* head;

};