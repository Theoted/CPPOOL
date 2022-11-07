/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theodeville <theodeville@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:12:25 by theodeville       #+#    #+#             */
/*   Updated: 2022/11/04 13:39:42 by theodeville      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon & Weapon ) : _name( name ), _Weapon( Weapon )
{
    std::cout << "Constructor Called" << std::endl;
}

HumanA::~HumanA( void )
{
    std::cout << "Destructor Called" << std::endl;
}

void    HumanA::attack( void ) const
{
    std::cout << _name << " attacks with their "
        << _Weapon.getType() << std::endl;
}
