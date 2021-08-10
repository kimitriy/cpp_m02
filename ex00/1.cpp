#include <iostream>
#include <bitset>

int main() 
{
	// int a = 1, b = a>>3, c = -1;
	int i = 1;
	while (i < 20)
	{
		int a = i, b = -i;

		std::cout << " " << a << " : " << std::bitset<8>(a) << std::endl;
		std::cout << b << " : " << std::bitset<8>(b) << std::endl;
		std::cout << std::endl;
		i++;
	}
	// std::cout << "c = " << std::bitset<32>(c) << std::endl;
	return (0);
}