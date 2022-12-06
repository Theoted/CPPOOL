/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <tdeville@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:54:39 by theodeville       #+#    #+#             */
/*   Updated: 2022/12/06 11:08:41 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    std::cout << "ClapTrap Default constructor called" << std::endl;
    this->_name = "No Name";
    this->initValues();
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
    std::cout << "ClapTrap Name constructor called" << std::endl;
    this->initValues();
}

ClapTrap::ClapTrap(const ClapTrap &ClapTrap)
{
    std::cout << "ClapTrap Copy constructor called" << std::endl;
    *this = ClapTrap;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap    &ClapTrap::operator=(const ClapTrap &ClapTrap)
{
    std::cout << "ClapTrap Copy operator called" << std::endl;
    if (this == &ClapTrap)
        return (*this);
    this->_name = ClapTrap._name;
    this->_attackDamage = ClapTrap._attackDamage;
    this->_hitPoints = ClapTrap._hitPoints;
    this->_energyPoints = ClapTrap._energyPoints;
    return (*this);
}

void    ClapTrap::initValues(void)
{
    std::cout << "ClapTrap int values initialized" << std::endl;
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 10;
}

void    ClapTrap::printValues(void) const
{
    std::cout << std::endl;
    std::cout << "ClapTrap named "
        << this->_name
        << " Stats: " << std::endl
        << this->_hitPoints << " Hit Points" << std::endl
        << this->_energyPoints << " Energy Points" << std::endl
        << this->_attackDamage << " Attack Damage" << std::endl;
    std::cout << std::endl;
}

void    ClapTrap::attack(const std::string& target)
{
    this->_energyPoints--;
    std::cout << "ClapTrap " << this->_name << " attacks " << target << 
        ", causing " << this->_attackDamage << " points of damage!" << 
        " And use 1 energy point" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amout)
{
    this->_hitPoints -= amout;
    std::cout << "ClapTrap " << this->_name << " take " << amout << 
        " damage. hitPoints = " << this->_hitPoints << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amout)
{
    this->_hitPoints += amout;
    std::cout << "ClapTrap " << this->_name << " are repaired by " << amout << 
        " hitPoints. hitPoints = " << this->_hitPoints << std::endl;
}
