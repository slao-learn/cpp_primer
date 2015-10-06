#include<iostream>

int main()
{
	int val1 = 0, val2 = 0;
	std::cout << "Enter two numbers" << std::endl;
	std::cin >> val1 >> val2;

	for (int i = val1; i <= val2; ++i)
		std::cout << i << std::endl;

	return 0;
}

