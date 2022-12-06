/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <tdeville@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:36:13 by tdeville          #+#    #+#             */
/*   Updated: 2022/12/06 10:44:49 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void )
{
    return ;
}

Zombie::Zombie(std::string name) : _name(name)
{
    std::cout << this->getName() << " born" << std::endl;
    return ;
}

Zombie::~Zombie(void)
{
    std::cout << this->getName() << " delete" << std::endl;
    return ;
}

std::string  Zombie::getName(void) const
{
    return ( this->_name );
}

void    Zombie::announce(void) const
{
    std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setName(std::string name)
{
    this->_name = name;
}
