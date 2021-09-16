#include "Fixed.hpp"

//default constructor
Fixed::Fixed( void )
	: m_fpValue(0)
{
	std::cout << FGRND_R_CYAN << "Default constructor called" << RESET << std::endl;
}

//copy constructor
Fixed::Fixed( const Fixed& other )
{
	std::cout << FGRND_R_PURPLE << "Copy constructor called" << RESET << std::endl;
	*this = other;
}

//destructor
Fixed::~Fixed( void )
{
	std::cout << FGRND_R_YELLOW << "Destructor called" << RESET << std::endl;
}

//assignation operator overload
Fixed & Fixed::operator= (const Fixed &other)
{
	std::cout << FGRND_R_BLUE << "Assignation operator called" << RESET << std::endl;
	this->m_fpValue = other.getRawBits();
	return ( *this );
}

//public m-methods
int		Fixed::getRawBits( void ) const
{
	std::cout << FGRND_R_GREEN << "getRawBits member function called" << RESET << std::endl;
	return ( m_fpValue );
}

void	Fixed::setRawBits( int const raw )
{
	m_fpValue = raw;
}