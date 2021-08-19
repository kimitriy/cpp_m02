#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class	Point
{
	private:
		Fixed	m_X;
		Fixed	m_Y;
	public:
		//default constructor
		Point( void );

		//constructor with parameters
		Point( Fixed x, Fixed y );
		
		//copy constructor
		Point( const Point& other );

		//destructor
		~Point( void );
		
		//assignation operator overload
		Point& operator= ( const Point& other );

		//setter
		void	setPoint( Fixed x, Fixed y );

		//getter
		Fixed&	getX( void );
		Fixed&	getY( void );
};

#endif