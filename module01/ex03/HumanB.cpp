/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <tdeville@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:12:25 by theodeville       #+#    #+#             */
/*   Updated: 2022/12/06 10:52:23 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string &name) : _name(name)
{
    std::cout << "Constructor Called" << std::endl;
}

HumanB::~HumanB(void)
{
    std::cout << "Destructor Called" << std::endl;
}

void    HumanB::attack(void) const
{
    std::cout << _name << " attacks with their "
        << _Weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &Weapon)
{
    this->_Weapon = &Weapon;
}
