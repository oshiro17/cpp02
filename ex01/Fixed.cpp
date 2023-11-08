#include "Fixed.hpp"
#include <math.h>

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int n)
{
	this->value = n << this->bits;
}

Fixed::Fixed(const float n)
{
	this->value = roundf(n * 256);
	//四捨五入か切り捨てか検証する
}
Fixed::Fixed(const Fixed &obj)
{
	std::cout << "Copy constructor called" << std::endl;
	this->value = obj.getRawBits();
}

Fixed& Fixed::operator=(const Fixed& obj) 
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &obj)
	{
		this->value = obj.getRawBits();
	}
	return (*this);
}
std::ostream&	operator<<(std::ostream& stream, const Fixed& fixed)
{
	stream << fixed.toFloat();
	return (stream);
}

float	Fixed::toFloat(void) const
{
	return ((float)this->value / 256);
}

int		Fixed::toInt(void) const
{
	int ret = 0;

	if (this->value < 0 && this->value > INT_MIN)
	{
		ret = this->value * -1;
		ret = -1 *(ret >> this->bits);
	}
	else
		ret = this->value >> this->bits;
	return(ret);
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void Fixed::setRawBits(int const raw)
{
	this->value = raw;
}