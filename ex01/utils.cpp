#include "Fixed.hpp"

//<< operator overload
std::ostream& operator << ( std::ostream& out, const Fixed& fn )
{
	out << fn.toFloat();
	return (out);
}