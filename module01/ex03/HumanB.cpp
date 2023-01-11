/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <tdeville@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:12:25 by theodeville       #+#    #+#             */
/*   Updated: 2022/12/08 13:56:01 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string &name) : _name(name), _Weapon(nullptr)
{
    std::cout << "Constructor Called" << std::endl;
}

HumanB::~HumanB(void)
{
    std::cout << "Destructor Called" << std::endl;
}

void    HumanB::attack(void) const
{
    if (_Weapon)
        std::cout << _name << " attacks with their "
            << _Weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &Weapon)
{
    this->_Weapon = &Weapon;
}
