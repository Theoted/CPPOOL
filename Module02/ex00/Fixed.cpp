/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theodeville <theodeville@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:37:23 by tdeville          #+#    #+#             */
/*   Updated: 2022/11/29 10:14:41 by theodeville      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _n(0)
{
    std::cout << "Default constructor called" << std::endl;
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

Fixed &Fixed::operator=(const Fixed &Fixed)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_n = Fixed.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_n);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_n = raw;
}
