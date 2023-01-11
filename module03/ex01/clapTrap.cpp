/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <tdeville@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:54:39 by theodeville       #+#    #+#             */
/*   Updated: 2022/12/14 10:09:45 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*---------------------
|                     |
|    CANONICAL FORM   |
|                     |
---------------------*/
ClapTrap::ClapTrap() : _name("NoName"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap default constructor called for " << _name  << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap  Name constructor called for " << _name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &ClapTrap)
{
    std::cout << "ClapTrap Copy constructor called for " << _name  << std::endl;
    *this = ClapTrap;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor called for " << _name << std::endl;
}

ClapTrap    &ClapTrap::operator=(const ClapTrap &ClapTrap)
{
    std::cout << "ClapTrap Copy operator called for " << _name << std::endl;
    _name = ClapTrap.getName();
    _hitPoints = ClapTrap.getHitPoints();
    _energyPoints = ClapTrap.getEnergyPoints();
    _attackDamage = ClapTrap.getAttackDamage();
    return (*this);
}

/*---------------------
|                     |
|   MEMBER FUNCTIONS  |
|                     |
---------------------*/
void    ClapTrap::printValues() const
{
    std::cout << std::endl;
    std::cout << "ClapTrap named "
        << _name
        << " Stats: " << std::endl
        << _hitPoints << " Hit Points" << std::endl
        << _energyPoints << " Energy Points" << std::endl
        << _attackDamage << " Attack Damage" << std::endl;
    std::cout << std::endl;
}

void    ClapTrap::attack(const std::string& target)
{
    if (_energyPoints == 0 || _hitPoints == 0)
    {
        std::cout << _name << " can't attack\n";
        return ;
    }
    _energyPoints--;
    std::cout << "ClapTrap " << _name << " attacks " << target << 
        ", causing " << _attackDamage << " points of damage!" << 
        " And use 1 energy point" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints < amount)
        _hitPoints = 0;
    else
        _hitPoints -= amount;
    std::cout << "ClapTrap " << _name << " take " << amount << 
        " damage. hitPoints = " << _hitPoints << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (_energyPoints == 0 || _hitPoints == 0)
    {
        std::cout << _name << " can't be repaired\n";
        return ;
    }
    _hitPoints += amount;
    std::cout << "ClapTrap " << _name << " are repaired by " << amount << 
        " hitPoints. hitPoints = " << _hitPoints << std::endl;
}

/*---------------------
|                     |
|       GETTERS       |
|                     |
---------------------*/
const std::string   &ClapTrap::getName() const          { return (_name); }
unsigned int        ClapTrap::getHitPoints() const      { return (_hitPoints); }
unsigned int        ClapTrap::getEnergyPoints() const   { return (_energyPoints); }
unsigned int        ClapTrap::getAttackDamage() const   { return (_attackDamage); }
