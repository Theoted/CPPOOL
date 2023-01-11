/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <tdeville@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:37:23 by tdeville          #+#    #+#             */
/*   Updated: 2022/12/12 13:19:10 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*-------------------------------
|  CONSTRUCTORS AND DESTRUCTOR  |
-------------------------------*/
Fixed::Fixed(void) : _rawBits(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n)
{
    std::cout << "Int constructor called" << std::endl;
    _rawBits = (n << _bits);
}

Fixed::Fixed(const float n)
{
    std::cout << "Float constructor called" << std::endl;
    _rawBits = roundf(n * (1 << _bits));
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &Fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    _rawBits = Fixed.getRawBits();
}

/*-------------------------------
| MEMBER FUNCTIONS AND OVERLOAD |
|           OPERATORS           |
-------------------------------*/
Fixed   &Fixed::operator=(const Fixed &Fixed)
{
    std::cout << "Copy assignment operator called" << std::endl;
    _rawBits = Fixed.getRawBits();
    return (*this);
}

std::ostream    &operator<<(std::ostream &o, Fixed const &F)
{
    o << F.toFloat();
    return (o);
}

float   Fixed::toFloat(void) const
{
    return ((float)(_rawBits / (double)(1 << _bits)));
}

int Fixed::toInt(void) const
{
    return (_rawBits >> _bits);
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (_rawBits);
}

void    Fixed::setRawBits(int const rawBits)
{
    std::cout << "setRawBits member function called" << std::endl;
    _rawBits = rawBits;
}
