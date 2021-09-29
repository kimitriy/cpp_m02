#include "Fixed.hpp"

int		main( void )
{
	
	Fixed	a( 45 );
	Fixed	b( -0.55f );

	std::cout << FGRND_B_GREEN << "a: " << FGRND_B_PURPLE << a << RESET << std::endl;
	std::cout << FGRND_B_GREEN << "b: " << FGRND_B_PURPLE << b << RESET << std::endl;

	if ( a > b )
		std::cout << FGRND_B_GREEN << "a > b:" << FGRND_B_PURPLE << " true" << RESET << std::endl;
	else
		std::cout << FGRND_B_GREEN << "a > b:" << FGRND_B_PURPLE << " false" << RESET << std::endl;

	if ( a < b )
		std::cout << FGRND_B_GREEN << "a < b:" << FGRND_B_PURPLE << " true" << RESET << std::endl;
	else
		std::cout << FGRND_B_GREEN << "a < b:" << FGRND_B_PURPLE << " false" << RESET << std::endl;

	if ( a >= b )
		std::cout << FGRND_B_GREEN << "a >= b:" << FGRND_B_PURPLE << " true" << RESET << std::endl;
	else
		std::cout << FGRND_B_GREEN << "a >= b:" << FGRND_B_PURPLE << " false" << RESET << std::endl;

	if ( a <= b )
		std::cout << FGRND_B_GREEN << "a <= b:" << FGRND_B_PURPLE << " true" << RESET << std::endl;
	else
		std::cout << FGRND_B_GREEN << "a <= b:" << FGRND_B_PURPLE << " false" << RESET << std::endl;

	if ( a == b )
		std::cout << FGRND_B_GREEN << "a == b:" << FGRND_B_PURPLE << " true" << RESET << std::endl;
	else
		std::cout << FGRND_B_GREEN << "a == b:" << FGRND_B_PURPLE << " false" << RESET << std::endl;

	if ( a != b )
		std::cout << FGRND_B_GREEN << "a != b:" << FGRND_B_PURPLE << " true" << RESET << std::endl;
	else
		std::cout << FGRND_B_GREEN << "a != b:" << FGRND_B_PURPLE << " false" << RESET << std::endl;

	Fixed c = a + b;
	std::cout << FGRND_B_GREEN << "a + b: float: " << FGRND_B_PURPLE << c.toFloat() << FGRND_B_GREEN << " raw: " << FGRND_B_PURPLE << c.getRawBits() << RESET << std::endl;
	
	c = a - b;
	std::cout << FGRND_B_GREEN << "a - b: float: " << FGRND_B_PURPLE << c.toFloat() << FGRND_B_GREEN << " raw: " << FGRND_B_PURPLE << c.getRawBits() << RESET << std::endl;

	c = a * b;
	std::cout << FGRND_B_GREEN << "a * b: float: " << FGRND_B_PURPLE << c.toFloat() << FGRND_B_GREEN << " raw: " << FGRND_B_PURPLE << c.getRawBits() << RESET << std::endl;

	c = a / b;
	std::cout << FGRND_B_GREEN << "a / b: float: " << FGRND_B_PURPLE << c.toFloat() << FGRND_B_GREEN << " raw: " << FGRND_B_PURPLE << c.getRawBits() << RESET << std::endl;

	a = Fixed( 4.58f );

	++a;
	std::cout << FGRND_B_GREEN << "++a: float: " << FGRND_B_PURPLE << a.toFloat() << FGRND_B_GREEN << " raw: " << FGRND_B_PURPLE << a.getRawBits() << RESET << std::endl;
	
	a++;
	std::cout << FGRND_B_GREEN << "a++: float: " << FGRND_B_PURPLE << a.toFloat() << FGRND_B_GREEN << " raw: " << FGRND_B_PURPLE << a.getRawBits() << RESET << std::endl;

	--a;
	std::cout << FGRND_B_GREEN << "--a: float: " << FGRND_B_PURPLE << a.toFloat() << FGRND_B_GREEN << " raw: " << FGRND_B_PURPLE << a.getRawBits() << RESET << std::endl;
	
	a--;
	std::cout << FGRND_B_GREEN << "a--: float: " << FGRND_B_PURPLE << a.toFloat() << FGRND_B_GREEN << " raw: " << FGRND_B_PURPLE << a.getRawBits() << RESET << std::endl;
	
	
	// Fixed a;
	// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	// std::cout << a << std::endl;
	// std::cout << ++a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << a << std::endl;

	// std::cout << b << std::endl;
	// std::cout << Fixed::max( a, b ) << std::endl;
	
	// a = Fixed(1);
	// while (a >= 0)
	// {
	// 	std::cout << a-- << std::endl;
	// }

	return (0);
}