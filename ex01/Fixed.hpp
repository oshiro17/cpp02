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
	float	toFloat(void) const;
	int		toInt(void) const;
	Fixed();
	Fixed(const int n);
	Fixed(const float num);
	~Fixed();
	Fixed& operator=(const Fixed& obj);
	Fixed(const Fixed& obj);
};

std::ostream& operator<<(std::ostream& stream, const Fixed& ob);

#endif