/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theodeville <theodeville@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:53:24 by theodeville       #+#    #+#             */
/*   Updated: 2022/11/30 15:55:53 by theodeville      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &AAnimal)
{
    std::cout << "AAnimal Copy constructor called" << std::endl;
    *this = AAnimal;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal  &AAnimal::operator=(const AAnimal &AAnimal)
{
    std::cout << "AAnimal Overloaded operator = called" << std::endl;
    _type = AAnimal._type;
    return (*this);
}

const std::string &AAnimal::getType() const
{
    return (_type);
}

void    AAnimal::makeSound() const
{
    std::cout << "AAnimal make a sound" << std::endl;
}
