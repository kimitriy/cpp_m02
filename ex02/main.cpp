#include "Fixed.hpp"

int		main( void )
{
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
	
	// Fixed const c( 42.42f );
	// Fixed const d( b );

	// a = Fixed( 1234.4321f );

	// std::cout << FGRND_R_PURPLE << "a is " << FGRND_R_GREEN << a << RESET << std::endl;
	// std::cout << FGRND_R_PURPLE << "b is " << FGRND_R_GREEN << b << RESET << std::endl;
	// std::cout << FGRND_R_PURPLE << "c is " << FGRND_R_GREEN << c << RESET << std::endl;
	// std::cout << FGRND_R_PURPLE << "d is " << FGRND_R_GREEN << d << RESET << std::endl;

	// std::cout << FGRND_R_PURPLE << "a is " << FGRND_R_GREEN << a.toInt() << FGRND_R_PURPLE << " as integer" << RESET << std::endl;
	// std::cout << FGRND_R_PURPLE << "b is " << FGRND_R_GREEN << b.toInt() << FGRND_R_PURPLE << " as integer" << RESET << std::endl;
	// std::cout << FGRND_R_PURPLE << "c is " << FGRND_R_GREEN << c.toInt() << FGRND_R_PURPLE << " as integer" << RESET << std::endl;
	// std::cout << FGRND_R_PURPLE << "d is " << FGRND_R_GREEN << d.toInt() << FGRND_R_PURPLE << " as integer" << RESET << std::endl;


	return (0);
}