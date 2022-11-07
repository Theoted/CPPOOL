/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theodeville <theodeville@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:12:25 by theodeville       #+#    #+#             */
/*   Updated: 2022/11/04 14:02:06 by theodeville      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name( name )
{
    std::cout << "Constructor Called" << std::endl;
}

HumanB::~HumanB( void )
{
    std::cout << "Destructor Called" << std::endl;
}

void    HumanB::attack( void ) const
{
    std::cout << _name << " attacks with their "
        << _Weapon->getType() << std::endl;
}

void    HumanB::setWeapon( Weapon &Weapon )
{
    this->_Weapon = &Weapon;
}
