/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theodeville <theodeville@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:12:34 by theodeville       #+#    #+#             */
/*   Updated: 2022/11/03 20:35:53 by theodeville      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( void )
{
    cout << "Construcor called" << endl;
    return ;
}

Weapon::~Weapon( void )
{
    cout << "Destructor called" << endl;
    return ;
}

string const &  Weapon::getType( void )
{
    return ( this->_type );
}

void    Weapon::setType( string const type )
{
    this->_type = type;
}