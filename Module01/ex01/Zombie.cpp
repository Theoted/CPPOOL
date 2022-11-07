/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <tdeville@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:36:13 by tdeville          #+#    #+#             */
/*   Updated: 2022/11/02 16:05:23 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void )
{
    return ;
}

Zombie::Zombie( string name ) : _name( name )
{
    cout << this->getName() << " born" << endl;
    return ;
}

Zombie::~Zombie( void )
{
    cout << this->getName() << " delete" << endl;
    return ;
}

string  Zombie::getName( void ) const
{
    return ( this->_name );
}

void    Zombie::announce( void ) const
{
    cout << getName() << ": BraiiiiiiinnnzzzZ..." << endl;
}

void    Zombie::setName( string name )
{
    this->_name = name;
}
