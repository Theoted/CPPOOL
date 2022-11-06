/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theodeville <theodeville@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:12:34 by theodeville       #+#    #+#             */
/*   Updated: 2022/11/04 13:44:08 by theodeville      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( void )
{
    std::cout << "Weapon Default Construcor called" << std::endl;
}

Weapon::Weapon( const std::string type ) : _type( type )
{
    std::cout << "Weapon Construcor called" << std::endl;
}

Weapon::~Weapon( void )
{
    std::cout << "Weapon Destructor called" << std::endl;
}

const std::string & Weapon::getType( void ) const
{
    return ( this->_type );
}

void    Weapon::setType( const std::string type )
{
    this->_type = type;
}