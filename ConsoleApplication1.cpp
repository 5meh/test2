// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

class A 
{
	public:
		A() = default;
		virtual ~A() = default;
		virtual void MyName()
		{
			std::cout << "My name is A"<<std::endl;
		}
};

class B:public A
{
	public:
		B() = default;
		virtual ~B() = default;
		void MyName()override
		{
			std::cout << "My name is B" << std::endl;
		}
};

class C :public A
{
	public:
		C() = default;
		virtual ~C() = default;
		void MyName()override
		{
			std::cout<< "My name is C"<<std::endl;
		}
};

A* Fabric(size_t type)
{
	switch (type)
	{
	case 0:
		return new A();
		break;
	case 1:
		return new B();
		break;
	case 2:
		return new C();
		break;
	}
}

size_t FibonNumber(size_t N)
{
	size_t x = 1;
	size_t y = 0;
	for (size_t i = 0; i < N; i++)
	{
		x += y;
		y = x - y;
	}
	return y;
}

int main()
{
	//ssss
	std::cout << "N=5" << FibonNumber(2) << std::endl;
	system("pause");
    return 0;
}

