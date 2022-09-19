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
	~Fixed(void);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	Fixed &operator=(const Fixed &copy);
};

#endif

