#include "intvector.h"
#include <cassert>
#include <test.h>

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
	return data[idx];
}

int& intVector::append(int val)
{

}

int main()
{
	intVector nums;

	assertEqual<size_t>(nums.getCapacity(), 2);

	nums.append(1);
	nums.append(5);

	assertEqual(nums.at(0), 1);
	assertEqual(nums.at(1), 5);
	assertEqual(nums.at(2), 33);
	assertEqual<size_t>(nums.getCapacity(), 4);
	assertEqual<size_t>(nums.getSize(), 3);
	assertEqual<false>(nums.empty());
	assertEqual(nums.Front(), 1);
	assertEqual(nums.back(), 33);
	assertEqual(nums.c_ptr(), &nums.at(0));

		return 0;
}