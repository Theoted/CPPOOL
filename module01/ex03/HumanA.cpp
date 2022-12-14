/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <tdeville@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:12:25 by theodeville       #+#    #+#             */
/*   Updated: 2022/12/06 10:51:10 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &Weapon) : _name(name), _Weapon(Weapon)
{
    std::cout << "Constructor Called" << std::endl;
}

HumanA::~HumanA(void)
{
    std::cout << "Destructor Called" << std::endl;
}

void    HumanA::attack(void) const
{
    std::cout << _name << " attacks with their "
        << _Weapon.getType() << std::endl;
}
