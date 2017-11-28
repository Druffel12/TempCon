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
	                                                                     

	int& at(size_t idx);

	int& append(int val);

	int* dataptr() const;

	size_t capacity_t() const;

private:
		bool grow(size_t minSize);

};