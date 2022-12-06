/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <tdeville@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:36:13 by tdeville          #+#    #+#             */
/*   Updated: 2022/12/06 10:35:37 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
    std::cout << this->getName() << " born" << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << this->getName() << " delete" << std::endl;
}

const std::string  &Zombie::getName(void) const
{
    return (this->_name);
}

void    Zombie::announce(void) const
{
    std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
