#include "Fixed.hpp"

//[<<] operator overload
std::ostream& operator<< ( std::ostream& out, const Fixed& fn )
{
	out << fn.toFloat();
	return (out);
}

//[>] operator overload
bool	operator> ( const Fixed& f1, const Fixed& f2)
{
	if (f1.getRawBits() > f2.getRawBits())
		return ( true );
	else
		return ( false );
}

//[<] operator overload
bool	operator< ( const Fixed& f1, const Fixed& f2)
{
	if (f1.getRawBits() < f2.getRawBits())
		return ( true );
	else
		return ( false );
}

//[>=] operator overload
bool	operator>= ( const Fixed& f1, const Fixed& f2)
{
	if (f1.getRawBits() >= f2.getRawBits())
		return ( true );
	else
		return ( false );
}

//[<=] operator overload
bool	operator<= ( const Fixed& f1, const Fixed& f2)
{
	if (f1.getRawBits() <= f2.getRawBits())
		return ( true );
	else
		return ( false );
}

//[==] operator overload
bool	operator== ( const Fixed& f1, const Fixed& f2)
{
	if (f1.getRawBits() == f2.getRawBits())
		return ( true );
	else
		return ( false );
}

//[!=] operator overload
bool	operator!= ( const Fixed& f1, const Fixed& f2)
{
	if (f1.getRawBits() != f2.getRawBits())
		return ( true );
	else
		return ( false );
}

//[+] operator overload
Fixed	operator+ ( const Fixed& f1, const Fixed& f2)
{
	Fixed rv;
	rv.setRawBits( f1.getRawBits() + f2.getRawBits() );
	return ( rv );
}

//[-] operator overload
Fixed	operator- ( const Fixed& f1, const Fixed& f2)
{
	Fixed rv;
	rv.setRawBits( f1.getRawBits() - f2.getRawBits() );
	return ( rv );
}

//[*] operator overload
Fixed	operator* ( const Fixed& f1, const Fixed& f2)
{
	float tmp = f1.toFloat() * f2.toFloat();
	Fixed mul( tmp );
	return ( mul );
}

//[/] operator overload
Fixed	operator/ ( const Fixed& f1, const Fixed& f2)
{
	float tmp = f1.toFloat() / f2.toFloat();
	Fixed div( tmp );
	return ( div );
}