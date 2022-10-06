#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called." << std::endl;
	this->number = 0;
	return ;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called." << std::endl;
	this->number = copy.getRawBits();
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called." << std::endl;
	return ;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called." << std::endl;
	return (this->number);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called." << std::endl;
	this->number = raw;
}

Fixed &Fixed::operator = (const Fixed &copy)
{
	std::cout << "Copy assignment operator called." << std::endl;
	this->number = copy.getRawBits();
	return (*this);
}

Fixed::Fixed(const int i){
	std::cout << "Int constructor called." << std::endl;
	this->number = i << Fixed::bits;
	return ;
}

Fixed::Fixed(const float f){
	std::cout << "Float constructor called." << std::endl;
	this->number = roundf(f * (1 << Fixed::bits));
	return ;
}


float	Fixed::toFloat(void) const
{
	return ((float)this->number / (1 << Fixed::bits));
}

int	Fixed::toInt(void) const
{
	return (this->number >> Fixed::bits);
}

std::ostream &operator << (std::ostream &os, const Fixed &obj)
{
	os << obj.toFloat();
	return (os);
}