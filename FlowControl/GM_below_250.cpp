/**
 * Program that only checks for multiples of a number
 */


#include<iostream>

int main()
{
	int number;


	std::cin >> number;


	for(int i = 251 ; i > 1; --i)
	{
		if(i % number == 0)
		{
			std::cout << i << '\n';
			return 0;
		}
	}


	return 0;
}
		
