#include "Fixed.hpp"

//default constructor
Fixed::Fixed( void )
	: m_vault(0)
{
	std::cout << FGRND_R_RED << "Default constructor called" << RESET << std::endl;
}

//int constructor
Fixed::Fixed( int val )
{
	m_vault = roundf(val * (1 << m_fb));
	std::cout << FGRND_R_CYAN << "Int constructor called" << RESET << std::endl;
}

//float constructor
Fixed::Fixed( float val )
{
	m_vault = roundf(val * (1 << m_fb));
	std::cout << FGRND_R_GREEN << "Float constructor called" << RESET << std::endl;
}

//copy constructor
Fixed::Fixed( const Fixed &other )
{
	this->m_vault = other.m_vault;
	std::cout << FGRND_R_PURPLE << "Copy constructor called" << RESET << std::endl;
}

//destructor
Fixed::~Fixed( void )
{
	std::cout << FGRND_R_YELLOW << "Destructor called" << RESET << std::endl;
}

//assignation operator overload
Fixed& Fixed::operator = ( const Fixed& other )
{
	this->m_vault = other.m_vault;
	std::cout << FGRND_R_BLUE << "Assignation operator called" << RESET << std::endl;
	return ( *this );
}

//public m-methods
int		Fixed::getRawBits( void ) const
{
	std::cout << FGRND_R_GREEN << "getRawBits member function called" << RESET << std::endl;
	return ( m_vault );
}

void	Fixed::setRawBits( int const raw )
{
	m_vault = raw;
}

float	Fixed::toFloat( void ) const
{
	float f;
	f = static_cast<float>(m_vault) / static_cast<float>(1 << m_fb);
	return (f);
}

int		Fixed::toInt( void ) const
{
	float	f;
	f = static_cast<float>(m_vault) / static_cast<float>(1 << m_fb);
	int		d = static_cast<int>(f);
	return (d);
}