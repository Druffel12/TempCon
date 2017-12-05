#include "intvector.h"
#include <cassert>
#include "intLinkedList.h"


template<typename T>
bool assertEqual(T a, T b)
{
	return a == b;
}


int main()
{
	intLinkedList nums;
	nums.append(1);
	nums.append(2);
	nums.append(3);
	nums.append(4);

	assertEqual(nums.at(2), 3);
	assertEqual(nums.at(7), 0);

	/*intVector nums;

	nums.append(1);
	nums.append(4);
	nums.append(4);
	nums.append(4);
	nums.append(5);

	nums.Erase(3);

	nums.insert(2, 7);

	int howManyFours = nums.count(4);

	nums.printVector();

	assert(howManyFours, 3);

	nums.Reserve(50);

	assert((int)nums.capacityF() == 50);*/


	//assertEqual<size_t>(nums.getCapacity(), 2);

	//nums.append(1);
	//nums.append(5);

	//assertEqual(nums.at(0), 1);
	//assertEqual(nums.at(1), 5);
	//assertEqual(nums.at(2), 33);
	//assertEqual<size_t>(nums.getCapacity(), 4);
	//assertEqual<size_t>(nums.getSize(), 3);
	//assertEqual<false>(nums.empty());
	//assertEqual(nums.Front(), 1);
	//assertEqual(nums.back(), 33);
	//assertEqual(nums.c_ptr(), &nums.at(0));


	while (true);
		return 0;
}