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

Dog::Dog()
{
    std::cout << "Dog default constructor called" << std::endl;
    _type = "Dog";
    _brain = new Brain();
}

Dog::Dog(const std::string &idea)
{
    std::cout << "Dog set ideas constructor called" << std::endl;
    _type = "Dog";
    _brain = new Brain(idea);
}

Dog::Dog(const Dog &Dog)
{
    std::cout << "Dog Copy constructor called" << std::endl;
    *this = Dog;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete _brain;
}

Dog  &Dog::operator=(const Dog &Dog)
{
    std::cout << "Dog Overloaded operator = called" << std::endl;
    _type = Dog._type;
    *_brain = *Dog._brain;
    return (*this);
}

void    Dog::makeSound() const
{
    std::cout << "Woufh Woufh (dog)" << std::endl;
}

// GETTER
const Brain &Dog::getBrain() const { return ( *_brain ); }