/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theodeville <theodeville@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:53:24 by theodeville       #+#    #+#             */
/*   Updated: 2022/11/30 15:01:27 by theodeville      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
    std::cout << "Dog default constructor called" << std::endl;
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::Dog(const Dog &Dog)
{
    std::cout << "Dog Copy constructor called" << std::endl;
    this->type = Dog.type;
}

Dog::~Dog(void)
{
    std::cout << "Dog destructor called" << std::endl;
    delete this->brain;
}

Dog  &Dog::operator=(const Dog &Dog)
{
    std::cout << "Dog Overloaded operator = called" << std::endl;
    this->type = Dog.type;
    return (*this);
}

void    Dog::makeSound(void) const
{
    std::cout << "Woufh Woufh (dog)" << std::endl;
}
