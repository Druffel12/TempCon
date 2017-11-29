#pragma once


//intvector.h

class intVector
{
	int * data;	//ptr to your dynamically allocated array
	size_t capacity; //total capacity
	size_t size; //total number of elments stored
	size_t capacity_t() const;
	size_t sizeptr()const;
	
	bool empty() const;

	int front() const;
	int back() const;

public:
	intVector();
	~intVector();

	int &operator[](size_t idx);

	int operator[](size_t idx) const;
	                                                                     

	int& at(size_t idx);

	int& append(int val);

	int* dataptr() const;

	size_t capacityF() const;

	void Clear();

	void Erase(size_t idx);

	int count(int value);

	void insert(size_t idx, int value);

	void Reserve(size_t newCapacity);

	void Compact();

	void printVector();

private:
		bool grow(size_t minSize);


};