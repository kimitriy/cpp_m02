#include "Fixed.hpp"

int		main( void )
{
	/*
	Fixed	a( 45 );
	Fixed	b( -0.55f );

	if ( a > b )
		std::cout << "[>]" << " true" << std::endl;
	else
		std::cout << "[>]" << " false" << std::endl;

	if ( a < b )
		std::cout << "[<]" << " true" << std::endl;
	else
		std::cout << "[<]" << " false" << std::endl;

	if ( a >= b )
		std::cout << "[>=]" << " true" << std::endl;
	else
		std::cout << "[>=]" << " false" << std::endl;

	if ( a <= b )
		std::cout << "[<=]" << " true" << std::endl;
	else
		std::cout << "[<=]" << " false" << std::endl;

	if ( a == b )
		std::cout << "[==]" << " true" << std::endl;
	else
		std::cout << "[==]" << " false" << std::endl;

	if ( a != b )
		std::cout << "[!=]" << " true" << std::endl;
	else
		std::cout << "[!=]" << " false" << std::endl;

	Fixed c = a + b;
	std::cout << "[+]" << " float: " << c.toFloat() << " raw: " << c.getRawBits() << std::endl;
	
	c = a - b;
	std::cout << "[-]" << " float: " << c.toFloat() << " raw: " << c.getRawBits() << std::endl;

	c = a * b;
	std::cout << "[*]" << " float: " << c.toFloat() << " raw: " << c.getRawBits() << std::endl;

	c = a / b;
	std::cout << "[/]" << " float: " << c.toFloat() << " raw: " << c.getRawBits() << std::endl;

	a = Fixed( 4.58f );

	++a;
	std::cout << "[pre++]" << " float: " << a.toFloat() << " raw: " << a.getRawBits() << std::endl;
	
	a++;
	std::cout << "[post++]" << " float: " << a.toFloat() << " raw: " << a.getRawBits() << std::endl;

	--a;
	std::cout << "[pre--]" << " float: " << a.toFloat() << " raw: " << a.getRawBits() << std::endl;
	
	a--;
	std::cout << "[post--]" << " float: " << a.toFloat() << " raw: " << a.getRawBits() << std::endl;
	*/
	
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	
	a = Fixed(1);
	while (a >= 0)
	{
		std::cout << a-- << std::endl;
	}

	return (0);
}