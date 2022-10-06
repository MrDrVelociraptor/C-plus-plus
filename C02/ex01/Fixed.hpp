#ifndef	FIXED_HPP
#define	FIXED_HPP

#include <iostream>

class Fixed
{
private:

	int					number;
	static const int	bits = 8;

public:

	Fixed(void);
	Fixed(const Fixed &copy);
	Fixed(const int i);
	Fixed(const float f);
	~Fixed(void);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

	Fixed &operator=(const Fixed &copy);
};

std::ostream &operator << (std::ostream &os, const Fixed &obj);

#endif

