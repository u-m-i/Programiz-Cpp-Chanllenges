/**
 * Print all the factors of a number
 */
#include<iostream>


int main()
{
	int number;

	std::cin >> number;

	for(int i = 1; i < number + 1; ++i)
	{
		if(number % i == 0)
			std::cout << i << '\n';
		
	}

	
	return 0;
}

	
