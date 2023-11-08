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
	Fixed	operator++(int);
	Fixed&	operator++();
	Fixed	operator--(int);
	Fixed&	operator--();
	Fixed	operator+(const Fixed &ob)const;
	Fixed	operator/(const Fixed &ob)const;
	Fixed	operator-(const Fixed &ob)const;
	Fixed	operator*(const Fixed&ob)const;
	Fixed&	operator=(const Fixed& ob);
	bool	operator!=(const Fixed &ob)const;
	bool	operator==(const Fixed &ob)const;
	bool	operator>(const Fixed &ob)const;
	bool	operator>=(const Fixed &ob)const;
	bool	operator<=(const Fixed &ob)const;
	bool	operator<(const Fixed &ob)const;
	Fixed(const Fixed& obj);
	// static Fixed&		max(Fixed& fixed1, Fixed& fixed2); 
	// static Fixed&		min(Fixed& fixed1, Fixed& fixed2); 
	// static const Fixed&		max(const Fixed& fixed1, const Fixed& fixed2); 
	// static const Fixed&		min(const Fixed& fixed1, const Fixed& fixed2); 
	static Fixed&		max(Fixed& fixed1, Fixed& fixed2)
	{
	// if (fixed1 == fixed2)
	//
		if (fixed1 >= fixed2)
			return(fixed1);
		return(fixed2);
	};

	static const Fixed&		max(const Fixed& fixed1, const Fixed& fixed2)
	{
		// if (fixed1 == fixed2)
		//
		if (fixed1 >= fixed2)
			return(fixed1);
		return(fixed2);
	};
	static Fixed&		min(Fixed& fixed1, Fixed& fixed2)
	{
		// if (fixed1 == fixed2)
		//
		if (fixed1 <= fixed2)
			return(fixed1);
		return(fixed2);
	};
	static const Fixed&		min(const Fixed& fixed1, const Fixed& fixed2)
	{
		// if (fixed1 == fixed2)
		//
		if (fixed1 <= fixed2)
			return(fixed1);
		return(fixed2);
	};
};
// static Fixed&		Fixed::max(Fixed& fixed1, Fixed& fixed2)
// {
// 	// if (fixed1 == fixed2)
// 	//
// 	if (fixed1 >= fixed2)
// 		return(fixed1);
// 	return(fixed2);
// }

// static const Fixed&		Fixed::max(const Fixed& fixed1, const Fixed& fixed2)
// {
// 	// if (fixed1 == fixed2)
// 	//
// 	if (fixed1 >= fixed2)
// 		return(fixed1);
// 	return(fixed2);
// }
// static Fixed&		Fixed::min(Fixed& fixed1, Fixed& fixed2)
// {
// 	// if (fixed1 == fixed2)
// 	//
// 	if (fixed1 <= fixed2)
// 		return(fixed1);
// 	return(fixed2);
// }
// static const Fixed&		Fixed::min(const Fixed& fixed1, const Fixed& fixed2)
// {
// 	// if (fixed1 == fixed2)
// 	//
// 	if (fixed1 <= fixed2)
// 		return(fixed1);
// 	return(fixed2);
// }
std::ostream& operator<<(std::ostream& stream, const Fixed& fixed);

#endif