#pragma once

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
	Array[5] = 0;
}


