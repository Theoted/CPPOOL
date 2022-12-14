/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theodeville <theodeville@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:53:24 by theodeville       #+#    #+#             */
/*   Updated: 2022/11/30 15:55:53 by theodeville      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &Animal)
{
    std::cout << "Animal Copy constructor called" << std::endl;
    this->type = Animal.type;
}

Animal::~Animal(void)
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal  &Animal::operator=(const Animal &Animal)
{
    std::cout << "Animal Overloaded operator = called" << std::endl;
    this->type = Animal.type;
    return (*this);
}

std::string Animal::getType(void) const
{
    return (this->type);
}

void    Animal::makeSound(void) const
{
    std::cout << "Animal make a sound" << std::endl;
}
