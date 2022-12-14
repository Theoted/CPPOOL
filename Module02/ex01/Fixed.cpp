/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <tdeville@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:37:23 by tdeville          #+#    #+#             */
/*   Updated: 2022/12/06 16:29:21 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*-------------------------------
|  CONSTRUCTORS AND DESTRUCTOR  |
-------------------------------*/
Fixed::Fixed(void) : _n(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n)
{
    std::cout << "Int to fixed point constructor called" << std::endl;
    this->_n = (n << this->_bits);
}

Fixed::Fixed(const float n)
{
    std::cout << "Float to fixed point constructor called" << std::endl;
    this->_n = roundf(n * (1 << this->_bits));
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &Fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = Fixed;
}

/*-------------------------------
| MEMBER FUNCTIONS AND OVERLOAD |
|           OPERATORS           |
-------------------------------*/
Fixed   &Fixed::operator=(const Fixed &Fixed)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_n = Fixed.getRawBits();
    return (*this);
}

std::ostream    &operator<<(std::ostream &o, Fixed const &F)
{
    o << F.toFloat();
    return (o);
}

float   Fixed::toFloat(void) const
{
    return ((float)(this->_n / (double)(1 << this->_bits)));
}

int Fixed::toInt(void) const
{
    return (this->_n >> this->_bits);
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_n);
}

void    Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_n = raw;
}
