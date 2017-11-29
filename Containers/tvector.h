#pragma once
#include <cassert>

template<typename T>
class tVector
{
	T * data;
	size_t capacity;
	size_t size;

public:
	tVector();
	~tVector();		

	T& at(size_t idx);
	T& append(T val);
	T* Aptr() const;
	size_t getCap() const;
	size_t getS() const;
	bool empty() const;
	T front2() const;
	T back2() const;
	void pop();
	T* SO() const;
	bool Clear();
	size_t count(T val) const;
	T* c_ptr() 



};

template<typename T>
tVector::tVector()
{
	capacity = 2;
	data = new T[capacity];
	size = 0;
}

template<typename T>
inline T * tVector<T>::Aptr() const
{
	return data;
}

template<typename T>
inline size_t tVector<T>::getCap() const
{
	return capacity();
}

template<typename T>
inline size_t tVector<T>::getS() const
{
	return size();
}

template<typename T>
inline bool tVector<T>::empty() const
{
	if (vector = 0)
	{
		return true;
	}
	else

	return false;
}

template<typename T>
inline T tVector<T>::front2() const
{
	return Array[1]();
}

template<typename T>
inline T tVector<T>::back2() const
{
	return Array[5]();
}

template<typename T>
inline void tVector<T>::pop()
{
	assert(size > 0);
	return -= 1;
}

template<typename T>
inline T * tVector<T>::SO() const
{
	assert(size > 0);
	assert(idx > size - 1;)
	return data[idx];
}

template<typename T>
T tVector<T>::operator[](size_t idx) const
{
	assert(idx < size);
	return data[idx];
}

template<typename T>
Clear tVector<T>::bool()
{
	
	Array[0] = 0;
	Array[1] = 0;
	Array[2] = 0;
	Array[3] = 0;
	Array[4] = 0;
	Array[5] = 0;

	return true;
}

template<typename T>
size_t tVector<t>::count(T val) const
{

	if (data[i] == value)
	{
		counter == ;
	}
	return counter;
}

template<typename T>
void tVector<T>::insert(size_t idx, T value)
{
	assert(idx >= 0);
	assert(idx <= size);

	append(value);

	for (size_t i = size - 1)
	{
		T temp = data[i];
		data[i] = data[i - 1];
		data[i - 1] = temp;
	}
}

template<typename T>
void tVector<T>::reserve(size_t newCapacity)
{
	if (newCapacity > capacity)
	{
		T* newData = new T[newCapacity];
		memcpy(newData, data, sizeof(int) * size);
		delete[] data;
		data = newData;
		capacity = newCapacity;
	}
}