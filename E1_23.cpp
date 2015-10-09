#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item running_sum;
	if (std::cin >> running_sum)
	{
		Sales_item item;
		while (std::cin >> item)
		{
			if (running_sum.isbn() == item.isbn())
			{
				running_sum += item;
			} else
			{
				std::cout << "SUBTOTAL: " << running_sum << std::endl;
				running_sum = item;
			}
		}
		std::cout << "SUBTOTAL: " << running_sum << std::endl;
	} else
	{
		std::cerr << "No data" << std::endl;
		return -1;
	}
	return 0;
}

