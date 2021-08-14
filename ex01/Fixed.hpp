#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>
# include <string>

# define RESET "\033[0m"

# define FGRND_R_BLACK "\033[0;30m"
# define FGRND_R_RED "\033[0;31m"
# define FGRND_R_GREEN "\033[0;32m"
# define FGRND_R_YELLOW "\033[0;33m"
# define FGRND_R_BLUE "\033[0;34m"
# define FGRND_R_PURPLE "\033[0;35m"
# define FGRND_R_CYAN "\033[0;36m"
# define FGRND_R_WHITE "\033[0;37m"

# define FGRND_B_BLACK "\033[1;30m"
# define FGRND_B_RED "\033[1;31m"
# define FGRND_B_GREEN "\033[1;32m"
# define FGRND_B_YELLOW "\033[1;33m"
# define FGRND_B_BLUE "\033[1;34m"
# define FGRND_B_PURPLE "\033[1;35m"
# define FGRND_B_CYAN "\033[1;36m"
# define FGRND_B_WHITE "\033[1;37m"

# define BGRND_BLACK "\033[7;30m"
# define BGRND_RED "\033[7;31m"
# define BGRND_GREEN "\033[7;32m"
# define BGRND_YELLOW "\033[7;33m"
# define BGRND_BLUE "\033[7;34m"
# define BGRND_PURPLE "\033[7;35m"
# define BGRND_CYAN "\033[7;36m"
# define BGRND_WHITE "\033[7;37m"

class	Fixed
{
	private:
		
		int					m_vault;
		static const int	m_fb = 8;
		
	public:
		//default constructor
		Fixed( void );
		
		//int constructor
		Fixed( int val );

		//float constructor
		Fixed( float val );

		//copy constructor
		Fixed( const Fixed &other );

		//destructor
		~Fixed( void );
		
		//assignation operator overload
		Fixed& operator = ( const Fixed& other );

		//public m-methods
		int				getRawBits( void ) const;
		void			setRawBits( int const raw );
		float			toFloat( void ) const;
		int				toInt( void ) const;
};

//<< operator overload
std::ostream& operator << ( std::ostream& out, const Fixed& fn );

#endif