#include "Fixed.hpp"
#include <math.h>
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
	std::cout << "Int constructor called" << std::endl;
	this->value = (n << this->bits);
}

Fixed::Fixed(const float n)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(n * 256);
	// std::cout << n <<std::endl;

	// std::cout << this->value <<std::endl;
	//四捨五入da
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
	// std::cout << "53ぎょうめ" <<std::endl;
	// std::cout << this->value <<std::endl;
	return ((float)(this->value) / 256);
}

int		Fixed::toInt(void) const
{
	return (this->value >> this->bits);
}

int		Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
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
	

	// std::cout << "______" <<std::endl;
	// std::cout << this->value <<std::endl;
	// std::cout << ob.value <<std::endl;
	// std::cout << ret.value <<std::endl;
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