#include "intvector.h"
#include <cassert>
#include <cstring>

intVector::intVector()
{
	capacity = 2;
	data = new int[capacity];
	size = 0;
}

intVector::~intVector()
{
	delete[] data;
}

int& intVector::at(size_t idx)
{
	assert(idx >= 0);
	assert(idx < size);

	return data[idx]; 
}

int& intVector::append(int val)
{
	if (size == capacity)
	{
		bool didGrow = grow(size + 1);
		assert(didGrow);
	}

	data[size] = val;
	++size;

	return data[size - 1];

}

size_t intVector::capacity_t() const
{
	return capacity;
}

size_t intVector::sizeptr() const
{
	return size_t();
}

bool intVector::empty() const
{
	return size == 0;;
}

int intVector::front() const
{
	return data[0];
}

int intVector::back() const
{
	return data[size - 1];
}

bool intVector::grow(size_t minSize)
{
	if (minSize <= capacity)
	{
		return true;
	}

	while (capacity < minSize)
	{
		capacity *= 2;
	}

	int oldCapacity = capacity;
	capacity *= 2;

	delete[] data;

	int* newData = new int[capacity];
	memcpy(newData, data, size);

	delete[] data;
	data = newData;

	return true;
}

int* intVector::dataptr() const
{
	return data;
}