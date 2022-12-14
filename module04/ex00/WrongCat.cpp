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

WrongCat::WrongCat(void)
{
    std::cout << "WrongCat default constructor called" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &WrongCat)
{
    std::cout << "WrongCat Copy constructor called" << std::endl;
    this->type = WrongCat.type;
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat  &WrongCat::operator=(const WrongCat &WrongCat)
{
    std::cout << "WrongCat Overloaded operator = called" << std::endl;
    this->type = WrongCat.type;
    return (*this);
}

void    WrongCat::makeSound(void) const
{
    std::cout << "MMuueeeWWeew (Wrong Cat)" << std::endl;
}

std::string WrongCat::getType(void) const
{
    return (this->type);
}
