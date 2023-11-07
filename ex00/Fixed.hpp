#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>


class Fixed
{
private:
	int value;
	const static int bits = 8;
public:
	int		getRawBits(void) const;
	void	setRawBits( int const raw );
	Fixed();
	~Fixed();
	Fixed& operator=(const Fixed& obj);
	Fixed(const Fixed& obj);
};

#endif