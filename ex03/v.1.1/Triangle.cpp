#include "Triangle.hpp"

//default constructor
Triangle::Triangle( void )
	: m_A(), m_B(), m_C()
{

}

//constructor with parameters
Triangle::Triangle( Point& a, Point& b, Point& c )
	: m_A(a), m_B(b), m_C(c)
{

}

//copy constructor
Triangle::Triangle( const Triangle& other )
{
	*this = other;
}

//destructor
Triangle::~Triangle( void ) {};

//assignation operator overload
Triangle& Triangle::operator= ( const Triangle& other )
{
	this->m_A = other.m_A;
	this->m_B = other.m_B;
	this->m_C = other.m_C;
	return ( *this );
}

//setter
void	Triangle::setTr( Point& a, Point& b, Point& c )
{
	m_A = a;
	m_B = b;
	m_C = c;
}

//getter
Point&	Triangle::getA( void )
{
	return ( m_A );
}

Point&	Triangle::getB( void )
{
	return ( m_B );
}

Point&	Triangle::getC( void )
{
	return ( m_C );
}

//m-method
bool	Triangle::bsp( Point& p, Triangle& tr )
{
	Fixed v1 = (tr.m_A.getX() - p.getX()) * (tr.m_B.getY() - tr.m_A.getY()) - (tr.m_B.getX() - tr.m_A.getX()) * (tr.m_A.getY() - p.getY());
	Fixed v2 = (tr.m_B.getX() - p.getX()) * (tr.m_C.getY() - tr.m_B.getY()) - (tr.m_C.getX() - tr.m_B.getX()) * (tr.m_B.getY() - p.getY());
	Fixed v3 = (tr.m_C.getX() - p.getX()) * (tr.m_A.getY() - tr.m_C.getY()) - (tr.m_A.getX() - tr.m_C.getX()) * (tr.m_C.getY() - p.getY());

	if ((v1 < 0 && v2 < 0 && v3 < 0) || (v1 > 0 && v2 > 0 && v3 > 0))
		return ( true );
	else if (v1 == 0 || v2 == 0 || v3 == 0)
		return ( true );
	else
		return ( false );
}