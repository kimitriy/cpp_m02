#include "Point.hpp"

//default constructor
Point::Point( void )
	: m_X(), m_Y()
{

}

//constructor with parameters
Point::Point( Fixed x, Fixed y )
	: m_X(x), m_Y(y)
{
	
}

//copy constructor
Point::Point( const Point& other )
{
	*this = other;
}

//destructor
Point::~Point( void ) {};

//assignation operator overload
Point& Point::operator= ( const Point& other )
{
	const_cast<Fixed&>(this->m_X) = other.getX();
	const_cast<Fixed&>(this->m_Y) = other.getY();

	return ( *this );
}

//setter
// void	Point::setPoint( Fixed x, Fixed y )
// {
// 	m_X = x;
// 	m_Y = y;
// }

//getter
const Fixed &	Point::getX( void ) const
{
	return ( m_X );
}

const Fixed &	Point::getY( void ) const
{
	return ( m_Y );
}