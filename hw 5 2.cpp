#include <iostream>


int main()
{
	int number;
	int sum = 0;
	std::cout << "Enter number:";
	std::cin >> number;
	while (number != 0)
	{
		sum += number % 10;
		number /= 10;

	}
	std::cout << "Sum of numbers:" << sum;

	return EXIT_SUCCESS;
}