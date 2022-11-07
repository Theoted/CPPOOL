/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <tdeville@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:36:13 by tdeville          #+#    #+#             */
/*   Updated: 2022/11/02 14:17:59 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

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
