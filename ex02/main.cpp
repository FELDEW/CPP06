#include "Identify.hpp"


Base *generate(void)
{
	Base *ptr;
	int random;
	srand(time(0));
	random = rand() % 3;
	switch (random)
	{
	case 0:
		ptr = new A;
		break;
	case 1:
		ptr = new B;
		break;	
	default:
		ptr = new C;
		break;
	}
	return ptr;
}

void identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify(Base &p)
{

	try
	{
		A ob;
		ob = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		B ob;
		ob = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		C ob;
		ob = dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
	}
	catch(const std::exception& e)
	{
	}
}

int main ()
{
	Base *ptr = NULL;
	ptr = generate();
	identify(ptr);
	std::cout << "------------" << std::endl;
	identify(*ptr);
	if (ptr)
		delete ptr;
}
