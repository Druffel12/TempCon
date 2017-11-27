#include <iostream>

int add(int a, int b)
{
	return a + b;
}

float add(float a, float b)
{
	return a + b;
}

template<typename T>
T sub(T a, T b)
{
	return a - b;
}

template<typename A>
A Output(A a, A b, A c)
{

	std::cout << a << b << c << std::endl;
	return a, b ,c;

}

template <typename B>
B min(B a, B b)
{
	if (a < b)
	{
		return a;
	}
	else
		return b;
}

template <typename B>
B max(B a, B b)
{
	if (a < b)
	{
		return b;
	}
	else
		return a;
}

template <typename B>
B clamp(B a, B b, B c)
{
	if (a < b && c > a || c < b && a > b)
	{
		//middle = b;
	
	}
	return b;

	if (b < a && b > c || b < a && c > a)
	{
		//middle = a;
	}
	return a;

	if (b < c && a > c || a < c && b > c)
	{
		//middle = c;
	
	}
	return c;
		
}

/*template <typename C>
C person(C age, C name)
{
	name;
	std::cout << "Users name is: " << name << std::endl;
	std::cout << "Users age is: " << age << std::endl;
}*/
class person
{
public:
	std::string name;
	int age;
	float height;
}; 
//open
template <typename D>
D Swap(D a, D b)
{
	int temp = b;
		b = a;
		a = b;
		return a, b;
}

template <typename E>
E Instanmin(E a, E b, )
{
	if (a < b)
	{
		return a;
	}
	else
		return b;

}

template <typename E>
E Instanmax(E a, E b, )
{



}
template <typename F>
F assertions(F a, F b)
{

	 
}

int main()
{
	person user;
	user.name = "Jeff";
	user.age = 23;
	user.height = 6.9;
	
	/*std::cout << user.name << std::endl;
	std::cout << user.age << std::endl;
	std::cout << user.height << std::endl;*/

	int v1 = add(5, 2);
	float v2 = add(2.1f, 3.2f);

	int s1 = sub(1, 1);
	float s2 = sub(2.5f, 1.1f);
	int s3 = sub<int>(1, 2.0f);
	float a1 = Output(1, 2, 3);
	int b1 = min(12, 6);
	int b2 = max(12, 6);
	float b3 = clamp(12, 21, 11);
	/*char C = person(23, );*/
	int D = Swap(1, 2);




	return 0;
}