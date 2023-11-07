#include "Fixed.hpp"
#include <math.h>
#include "Fixed.hpp"
#include <math.h>

Fixed::Fixed()
{
	std::clog << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::~Fixed()
{
	std::clog << "Destructor called" << std::endl;
}

Fixed::Fixed(const int n)
{
	std::clog << "Constructor called" << std::endl;
	this->value = (n << this->bits);
}

Fixed::Fixed(const float n)
{
	this->value = roundf(n * 256);
}
Fixed::Fixed(const Fixed &obj)
{
	// std::cout << "Copy constructor called" << std::endl;
	this->value = obj.getRawBits();
}

Fixed& Fixed::operator=(const Fixed& obj) 
{
	// std::cout << "Copy assignment operator called" << std::endl;
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
	return ((float)(this->value) / 256);
}

int		Fixed::toInt(void) const
{
	return (this->value >> this->bits);
}

int		Fixed::getRawBits(void) const
{
	return (this->value);
}

void Fixed::setRawBits(int const raw)
{
	this->value = raw;
}
//前置インクリメント
Fixed&	Fixed::operator++()
{
	// std::cout<<"a";
	this->value++;
	return(*this);
}

// 後置インクリメント演算子のためのパラメータint
Fixed	Fixed::operator++(int)
{
	Fixed ret = *this;
	this->value++;
	return (ret);
}

bool	Fixed::operator==(const Fixed& obj)
{
	return (this->value == obj.value);
}

bool	Fixed::operator!=(const Fixed& obj)
{
	return (this->value != obj.value);
}

bool	Fixed::operator>(const Fixed& obj)
{
	return (this->value > obj.value);
}

bool	Fixed::operator<(const Fixed& obj)
{
	return (this->value < obj.value);
}

bool	Fixed::operator<=(const Fixed& obj) const
{
	return (this->value <= obj.value);
}

bool	Fixed::operator>=(const Fixed& obj)const
{
	return (this->value >= obj.value);
}
Fixed Fixed::operator*(const Fixed&ob)
{
	Fixed ret;
	float t_val = this->toFloat();
	float ob_val = ob.toFloat();
	float value = t_val * ob_val;
	ret.value = roundf(value * 256);
	return (ret);
}

Fixed Fixed::operator/(const Fixed&ob)
{
	Fixed ret;
	float t_val = this->toFloat();
	float ob_val = ob.toFloat();
	float value = t_val / ob_val;
	ret.value = roundf(value * 256);
	return (ret);
}

Fixed Fixed::operator-(const Fixed&ob)
{
	Fixed ret;
	ret.value =this->value - ob.value;
	return (ret);
}
Fixed Fixed::operator+(const Fixed&ob)
{
	Fixed ret;
	ret.value =this->value + ob.value;
	return (ret);
}
