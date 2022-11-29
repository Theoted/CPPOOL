/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theodeville <theodeville@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:37:23 by tdeville          #+#    #+#             */
/*   Updated: 2022/11/29 13:41:34 by theodeville      ###   ########.fr       */
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
    setRawBits(Fixed.getRawBits());
    return (*this);
}

std::ostream    &operator<<(std::ostream &o, Fixed const &F)
{
    o << F.toFloat();
    return (o);
}

// Comparaison operators
bool    Fixed::operator<(const Fixed &F2)
{
    return (this->getRawBits() < F2.getRawBits());
}

bool    Fixed::operator>(const Fixed &F2)
{
    return (this->getRawBits() > F2.getRawBits());
}

bool    Fixed::operator<=(const Fixed &F2)
{
    return (this->getRawBits() <= F2.getRawBits());
}

bool    Fixed::operator>=(const Fixed &F2)
{
    return (this->getRawBits() >= F2.getRawBits());
}

bool    Fixed::operator==(const Fixed &F2)
{
    return (this->getRawBits() == F2.getRawBits());
}

bool    Fixed::operator!=(const Fixed &F2)
{
    return (this->getRawBits() != F2.getRawBits());
}

// Arithmetic operators
Fixed   Fixed::operator+(const Fixed &F2)
{
    Fixed   res;
    
    res.setRawBits(this->getRawBits() + F2.getRawBits());
    return (res);
}

Fixed   Fixed::operator-(const Fixed &F2)
{
    Fixed   res;
    
    res.setRawBits(this->getRawBits() - F2.getRawBits());
    return (res);
}

Fixed   Fixed::operator*(const Fixed &F2)
{
    Fixed   res;
    
    res.setRawBits((this->getRawBits() * F2.getRawBits()) >> this->_bits);
    return (res);
}
   
Fixed   Fixed::operator/(const Fixed &F2)
{
    Fixed   res;
    
    res.setRawBits((this->getRawBits() / F2.getRawBits()) << this->_bits);
    return (res);
}

// Increment and decrement operators
    // Prefix
Fixed   &Fixed::operator++(void)
{
    setRawBits(getRawBits() + 1);
    return (*this);
}

Fixed   &Fixed::operator--(void)
{
    setRawBits(getRawBits() - 1);
    return (*this);
}
    // Postfix
Fixed   Fixed::operator++(int n)
{
    (void)n;
    Fixed   tmp;

    tmp.setRawBits(getRawBits());
    setRawBits(getRawBits() + 1);
    return (tmp);
}

Fixed   Fixed::operator--(int n)
{
    (void)n;
    Fixed   tmp;

    tmp.setRawBits(getRawBits());
    setRawBits(getRawBits() - 1);
    return (tmp);
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

const Fixed   &Fixed::min(Fixed &F1, Fixed &F2)
{
    return (F1.getRawBits() > F2.getRawBits() ? F2 : F1);
}

const Fixed   &Fixed::min(const Fixed &F1, const Fixed &F2)
{
    return (F1.getRawBits() > F2.getRawBits() ? F2 : F1);
}

const Fixed   &Fixed::max(Fixed &F1, Fixed &F2)
{
    return (F1.getRawBits() < F2.getRawBits() ? F2 : F1);
}

const Fixed   &Fixed::max(const Fixed &F1, const Fixed &F2)
{
    return (F1.getRawBits() < F2.getRawBits() ? F2 : F1);
}
