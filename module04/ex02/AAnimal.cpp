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

AAnimal::AAnimal(void)
{
    std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &AAnimal)
{
    std::cout << "AAnimal Copy constructor called" << std::endl;
    this->type = AAnimal.type;
}

AAnimal::~AAnimal(void)
{
    std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal  &AAnimal::operator=(const AAnimal &AAnimal)
{
    std::cout << "AAnimal Overloaded operator = called" << std::endl;
    this->type = AAnimal.type;
    return (*this);
}

std::string AAnimal::getType(void) const
{
    return (this->type);
}

void    AAnimal::makeSound(void) const
{
    std::cout << "AAnimal make a sound" << std::endl;
}
