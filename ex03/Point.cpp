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
	this->m_X = other.m_X;
	this->m_Y = other.m_Y;
	return ( *this );
}

//setter
void	Point::setPoint( Fixed x, Fixed y )
{
	m_X = x;
	m_Y = y;
}

//getter
Fixed&	Point::getX( void )
{
	return ( m_X );
}

Fixed&	Point::getY( void )
{
	return ( m_Y );
}