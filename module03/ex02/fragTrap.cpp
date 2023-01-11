/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <tdeville@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 10:55:50 by theodeville       #+#    #+#             */
/*   Updated: 2022/12/14 10:32:34 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    _name = "FragTrap Without Name";
    std::cout << "FragTrap Default constructor called for " << _name << std::endl;
    initValues();
}

FragTrap::FragTrap(std::string name)
{
    _name = name;
    std::cout << "FragTrap Name constructor called for " << _name << std::endl;
    initValues();
}

FragTrap::FragTrap(const FragTrap &FragTrap)
{
    std::cout << "FragTrap Copy constructor called for " << _name << std::endl;
    *this = FragTrap;
}

FragTrap    &FragTrap::operator=(const FragTrap &FragTrap)
{
    std::cout << "Copy operator called for " << _name << std::endl;
    _name = FragTrap.getName();
    _attackDamage = FragTrap.getAttackDamage();
    _hitPoints = FragTrap.getHitPoints();
    _energyPoints = FragTrap.getEnergyPoints();
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called for " << _name << std::endl;
}

void    FragTrap::initValues()
{
    std::cout << "FragTrap Init Values called for " << _name << std::endl;
    _attackDamage = 30;
    _hitPoints = 100;
    _energyPoints = 100;
}

void    FragTrap::printValues() const
{
    std::cout << std::endl;
    std::cout << "FragTrap named "
        << _name
        << " Stats: " << std::endl
        << _hitPoints << " Hit Points" << std::endl
        << _energyPoints << " Energy Points" << std::endl
        << _attackDamage << " Attack Damage" << std::endl;
    std::cout << std::endl;
}

void    FragTrap::highFivesGuys()
{
    std::cout << _name <<  ": 'Give me five !'\n";
}

void    FragTrap::attack(const std::string& target)
{
    if (_energyPoints == 0 || _hitPoints == 0)
    {
        std::cout << _name << " Can't attack\n";
        return ;
    }
    _energyPoints--;
    std::cout << "FragTrap " << _name << " attacks " << target << 
        ", causing " << _attackDamage << " points of damage!" << 
        " And use 1 energy point" << std::endl;
}
