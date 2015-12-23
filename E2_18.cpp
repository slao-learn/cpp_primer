#include <iostream>

int main()
{
	int a = 10, b = 20, *c = &a;
	std::cout << *c << std::endl;
	c = &b;
	std::cout << *c << std::endl;
	*c = 15;
	std::cout << *c << std::endl;
}
