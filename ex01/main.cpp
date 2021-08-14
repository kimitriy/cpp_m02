#include "Fixed.hpp"

int		main( void )
{
	Fixed		a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );

	a = Fixed( 1234.4321f );

	std::cout << FGRND_R_PURPLE << "a is " << FGRND_R_GREEN << a << RESET << std::endl;
	std::cout << FGRND_R_PURPLE << "b is " << FGRND_R_GREEN << b << RESET << std::endl;
	std::cout << FGRND_R_PURPLE << "c is " << FGRND_R_GREEN << c << RESET << std::endl;
	std::cout << FGRND_R_PURPLE << "d is " << FGRND_R_GREEN << d << RESET << std::endl;

	std::cout << FGRND_R_PURPLE << "a is " << FGRND_R_GREEN << a.toInt() << FGRND_R_PURPLE << " as integer" << RESET << std::endl;
	std::cout << FGRND_R_PURPLE << "b is " << FGRND_R_GREEN << b.toInt() << FGRND_R_PURPLE << " as integer" << RESET << std::endl;
	std::cout << FGRND_R_PURPLE << "c is " << FGRND_R_GREEN << c.toInt() << FGRND_R_PURPLE << " as integer" << RESET << std::endl;
	std::cout << FGRND_R_PURPLE << "d is " << FGRND_R_GREEN << d.toInt() << FGRND_R_PURPLE << " as integer" << RESET << std::endl;
	
	return (0);
}