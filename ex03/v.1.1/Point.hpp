#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class	Point
{
	private:
		Fixed const	m_X;
		Fixed const	m_Y;
	public:
		//default constructor
		Point( void );

		//constructor with parameters
		Point( const float x, const float y );
		
		//copy constructor
		Point( const Point& other );

		//destructor
		~Point( void );
		
		//assignation operator overload
		Point& operator= ( const Point& other );

		//getter
		const Fixed &	getX( void ) const;
		const Fixed &	getY( void ) const;
};

#endif