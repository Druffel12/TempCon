#pragma once
#include "tvector.h"

template<typename T>
class iterator
{
public:
	iterator() = delete;

	iterator()
	{

	}

	iterator(T& conatainer, int initialIndex)
		:owningContainer(&container)
		, currentIndex(initalIndex)
	{
		
	}

	iterator(const iterator<T>& other)
		:owningContainer(other.ownContainer)
		, currentIndex(other.currentIndex)
	{

	}

	iterator<T>& operator=(const iterator<T>& other);
	{
		owningContainer = oter.owningConatiner;
		currentIndex = other.currentIndex;
	}

	bool operator==(const iterator<T>& other)
	{
		bool isSameConatainer = owningContainer == other.owningContainer;
		bool isSameIndex = currentIndex == other.currentIndex;
		
		return isSameConatiner && isSameContainer;
	}

	bool operator!=(const iterator<T>& other)
	{
		bool isSameContainer = owningContainer == other.owningContainer;
		bool isSameIndex = currentIndex == other.currentIndex;

		return !isSameContainer || !isSameContainer;
	}

	auto& operator*()
	{
		return owningContainer->at(currentIndex);
	}

	iterator<T>& operator++()
	{
		++currentIndex;
		return *this;

	}

	iterator<T>& operator++(T previousValue)
	{
		iterator<T> tmp(owningContainer, prviousValue);
		operator++();
		return tmp;
	}

	/*bool operator!=(const iterator<T>& other);
	bool operator==(const iterator<T>& other);

	T& operator*();

	T& operator++();
	T& operator++(T);*/

private:
	T* owningContainer;
	int			currentIndex;
};