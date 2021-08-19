#ifndef TRIANGLE_HPP
# define TRIANGLE_HPP

# include "Fixed.hpp"
# include "Point.hpp"

class	Triangle
{
	private:
		Point	m_A;
		Point	m_B;
		Point	m_C;
	public:
		//default constructor
		Triangle( void );

		//constructor with parameters
		Triangle( Point& a, Point& b, Point& c );
		
		//copy constructor
		Triangle( const Triangle& other );

		//destructor
		~Triangle( void );
		
		//assignation operator overload
		Triangle& operator= ( const Triangle& other );

		//setter
		void	setTr( Point& a, Point& b, Point& c );

		//getter
		Point&	getA( void );
		Point&	getB( void );
		Point&	getC( void );

		//m-method
		bool	isPointInTriangle( Point& p, Triangle& tr );
};

#endif