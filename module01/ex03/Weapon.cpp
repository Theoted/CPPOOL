/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <tdeville@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:12:34 by theodeville       #+#    #+#             */
/*   Updated: 2022/12/06 10:48:38 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
    std::cout << "Weapon Default Construcor called" << std::endl;
}

Weapon::Weapon(const std::string &type) : _type(type)
{
    std::cout << "Weapon Construcor called" << std::endl;
}

Weapon::~Weapon(void)
{
    std::cout << "Weapon Destructor called" << std::endl;
}

const std::string &Weapon::getType(void) const
{
    return (this->_type);
}

void    Weapon::setType(const std::string &type)
{
    this->_type = type;
}