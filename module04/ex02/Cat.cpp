/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theodeville <theodeville@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:53:24 by theodeville       #+#    #+#             */
/*   Updated: 2022/11/30 15:01:27 by theodeville      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat default constructor called" << std::endl;
    _type = "Cat";
    _brain = new Brain();
}

Cat::Cat(const std::string &idea)
{
    std::cout << "Cat set ideas constructor called" << std::endl;
    _type = "Cat";
    _brain = new Brain(idea);
}

Cat::Cat(const Cat &Cat)
{
    std::cout << "Cat Copy constructor called" << std::endl;
    *this = Cat;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete _brain;
}

Cat  &Cat::operator=(const Cat &Cat)
{
    std::cout << "Cat Overloaded operator = called" << std::endl;
    _type = Cat._type;
    *_brain = *Cat._brain;
    return (*this);
}

void    Cat::makeSound() const
{
    std::cout << "Miaaaou (Cat)" << std::endl;
}

// GETTER
const Brain &Cat::getBrain() const { return ( *_brain ); }
