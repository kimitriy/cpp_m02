#include "Fixed.hpp"

//default constructor
Fixed::Fixed( void )
	: m_fpValue(0)
{
	std::cout << FGRND_R_CYAN << "Default constructor called" << RESET << std::endl;
}

//copy constructor
Fixed::Fixed( const Fixed &other )
{
	this->m_fpValue = other.m_fpValue;
	std::cout << FGRND_R_PURPLE << "Copy constructor called" << RESET << std::endl;
}

//destructor
Fixed::~Fixed( void )
{
	std::cout << FGRND_R_YELLOW << "Destructor called" << RESET << std::endl;
}

//assignation operator overload
Fixed & Fixed::operator= (const Fixed &other)
{
	this->m_fpValue = other.m_fpValue;
	std::cout << FGRND_R_BLUE << "Assignation operator called" << RESET << std::endl;
	return ( *this );
}

//public m-methods
int		Fixed::getRawBits( void )
{
	std::cout << FGRND_R_GREEN << "getRawBits member function called" << RESET << std::endl;
	return ( m_fpValue );
}

void	Fixed::setRawBits( int const raw )
{
	m_fpValue = raw;
}