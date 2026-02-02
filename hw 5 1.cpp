#include <iostream>

int main()
{
	int a;
	int sum = 0;

	while (true) {
		std::cout << "Enter number '0'" << std::endl;
		std::cin >> a;
		if (a == 0)
			break;
		sum += a;

	}
	std::cout << "Sum:";
	std::cout << sum;
	return EXIT_SUCCESS;
}
