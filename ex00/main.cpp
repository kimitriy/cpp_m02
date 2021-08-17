#include "Fixed.hpp"

int		main( void )
{
	Fixed a;
	// a.setRawBits(15);
	Fixed b( a );
	Fixed c;

	// b.setRawBits(11);
	c = b;

	// c.setRawBits(111);

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	
	return 0;
}