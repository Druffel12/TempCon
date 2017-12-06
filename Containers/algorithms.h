#pragma once

template<typename T, typename S>
static S addRange(T start, T end)
{
	S total = 0;
	T iter = start;
	while (iter != end)
	{
		total += *iter;
		
		++iter;
	}
	return total;
}

template<typename T, typename S>
static S addRangeFinished(T start, T end)
{
	S total = 0;
	T iter = start;
	while (iter != end)
	{
		total += *iter;
		++iter;
	}
	return total;
}

static int addRange(int* start, int* end)
{
	int total = 0;
	int* iter = start;
	while (iter != end)
	{
		total += *iter;
		++iter;
	}

	return total;
}