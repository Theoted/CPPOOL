/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theodeville <theodeville@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 10:55:50 by theodeville       #+#    #+#             */
/*   Updated: 2022/11/30 12:23:20 by theodeville      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scavTrap.hpp"

ScavTrap::ScavTrap(void)
{
    std::cout << "ScavTrap Default constructor called" << std::endl;
    this->_name = "ScavTrap Without Name";
    this->scavInitValues();
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "ScavTrap Name constructor called" << std::endl;
    this->scavInitValues();
    this->_name = name;
}

ScavTrap::ScavTrap(const ScavTrap &ScavTrap)
{
    std::cout << "ScavTrap Copy constructor called" << std::endl;
    *this = ScavTrap;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap Destructor called" << std::endl;
}

void    ScavTrap::scavInitValues(void)
{
    std::cout << "ScavTrap Init Values called" << std::endl;
    this->_attackDamage = 20;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->gateKeeperState = 0;
}

void    ScavTrap::scavPrintValues(void) const
{
    std::cout << std::endl;
    std::cout << "ScavTrap named "
        << this->_name
        << " Stats: " << std::endl
        << this->_hitPoints << " Hit Points" << std::endl
        << this->_energyPoints << " Energy Points" << std::endl
        << this->_attackDamage << " Attack Damage" << std::endl;
    std::cout << std::endl;
}

void    ScavTrap::gateKeeper(void)
{
    std::cout << "ScavTrap " << this->_name << " enter in Gape Keeper state !"
        << std::endl;
    this->gateKeeperState = 1;
}

ScavTrap    &ScavTrap::operator=(const ScavTrap &ScavTrap)
{
    std::cout << "Copy operator called" << std::endl;
    if (this == &ScavTrap)
        return (*this);
    this->_name = ScavTrap._name;
    this->_attackDamage = ScavTrap._attackDamage;
    this->_hitPoints = ScavTrap._hitPoints;
    this->_energyPoints = ScavTrap._energyPoints;
    return (*this);
}
