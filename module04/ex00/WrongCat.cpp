/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theodeville <theodeville@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:53:24 by theodeville       #+#    #+#             */
/*   Updated: 2022/11/30 15:01:27 by theodeville      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat default constructor called" << std::endl;
    _type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &WrongCat)
{
    std::cout << "WrongCat Copy constructor called" << std::endl;
    *this = WrongCat;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat  &WrongCat::operator=(const WrongCat &WrongCat)
{
    std::cout << "WrongCat Overloaded operator = called" << std::endl;
    _type = WrongCat._type;
    return (*this);
}

void    WrongCat::makeSound() const
{
    std::cout << "MMuueeeWWeew (Wrong Cat)" << std::endl;
}

std::string WrongCat::getType() const
{
    return (_type);
}
