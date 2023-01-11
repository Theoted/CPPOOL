/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <tdeville@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 10:55:50 by theodeville       #+#    #+#             */
/*   Updated: 2022/12/14 10:23:09 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    _name = "ScavTrap Without Name";
    std::cout << "ScavTrap Default constructor called" << std::endl;
    initValues();
}

ScavTrap::ScavTrap(const std::string &name)
{
    _name = name;
    std::cout << "ScavTrap Name constructor called for " << _name << std::endl;
    initValues();
}

ScavTrap::ScavTrap(const ScavTrap &ScavTrap)
{
    std::cout << "ScavTrap Copy constructor called for " << _name << std::endl;
    _name = ScavTrap.getName();
    _hitPoints = ScavTrap.getHitPoints();
    _energyPoints = ScavTrap.getEnergyPoints();
    _attackDamage = ScavTrap.getAttackDamage();
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called for " << _name << std::endl;
}

ScavTrap    &ScavTrap::operator=(const ScavTrap &ScavTrap)
{
    std::cout << "Copy operator called for " << _name << std::endl;
    _name = ScavTrap._name;
    _attackDamage = ScavTrap._attackDamage;
    _hitPoints = ScavTrap._hitPoints;
    _energyPoints = ScavTrap._energyPoints;
    return (*this);
}

void    ScavTrap::initValues()
{
    std::cout << "ScavTrap Init Values called for " << _name << std::endl;
    _attackDamage = 20;
    _hitPoints = 100;
    _energyPoints = 50;
    _gateKeeperState = 0;
}

void    ScavTrap::printValues() const
{
    std::cout << std::endl;
    std::cout << "ScavTrap named "
        << _name
        << " Stats: " << std::endl
        << _hitPoints << " Hit Points" << std::endl
        << _energyPoints << " Energy Points" << std::endl
        << _attackDamage << " Attack Damage" << std::endl
        << _gateKeeperState << " GateKeeperState" << std::endl;
    std::cout << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _name << " enter in Gate Keeper state !"
        << std::endl;
    _gateKeeperState = 1;
}

void    ScavTrap::attack(const std::string &target)
{
    if (_energyPoints == 0 || _hitPoints == 0)
    {
        std::cout << _name << " Can't attack\n";
        return ;
    }
    _energyPoints--;
    std::cout << "ScavTrap " << _name << " attacks " << target << 
        ", causing " << _attackDamage << " points of damage!" << 
        " And use 1 energy point" << std::endl;
}


