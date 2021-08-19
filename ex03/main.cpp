#include "Fixed.hpp"
#include "Point.hpp"
#include "Triangle.hpp"

int		main( void )
{
	Fixed	x;
	Fixed	y;

	x = Fixed(4.6f);
	y = Fixed(-1.02f);
	Point	a(x, y);

	x = Fixed(6.3f);
	y = Fixed(4.38f);
	Point	b(x, y);

	x = Fixed(12.14f);
	y = Fixed(2.58f);
	Point	c(x, y);

	Triangle tr(a, b, c);
	
	x = Fixed(7.78f);
	y = Fixed(2.38f);
	Point	test(x, y);
	
	if (tr.isPointInTriangle(test, tr))
		std::cout << "the test point is in the triangle" << std::endl;
	else
		std::cout << "the test point is not in the triangle" << std::endl;

	return (0);
}