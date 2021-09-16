#include "Fixed.hpp"
#include "Point.hpp"

int		main( void )
{
	Point	a(4.6f, -1.02f);
	Point	b(6.3f, 4.38f);
	Point	c(12.14f, 2.58f);
	
	Point	test(7.78f, 2.38f);
	
	if (bsp(a, b, c, test))
		std::cout << FGRND_R_GREEN << "The test point is in the triangle" << RESET << std::endl;
	else
		std::cout << FGRND_R_RED << "The test point is not in the triangle" << RESET << std::endl;

	return (0);
}