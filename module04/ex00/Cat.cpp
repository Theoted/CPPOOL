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

Cat::Cat(void)
{
    std::cout << "Cat default constructor called" << std::endl;
    this->type = "Cat";
}

Cat::Cat(const Cat &Cat)
{
    std::cout << "Cat Copy constructor called" << std::endl;
    this->type = Cat.type;
}

Cat::~Cat(void)
{
    std::cout << "Cat destructor called" << std::endl;
}

Cat  &Cat::operator=(const Cat &Cat)
{
    std::cout << "Cat Overloaded operator = called" << std::endl;
    this->type = Cat.type;
    return (*this);
}

void    Cat::makeSound(void) const
{
    std::cout << "Miaaaou (Cat)" << std::endl;
}
