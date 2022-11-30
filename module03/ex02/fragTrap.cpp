/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theodeville <theodeville@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 10:55:50 by theodeville       #+#    #+#             */
/*   Updated: 2022/11/30 12:43:52 by theodeville      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fragTrap.hpp"

FragTrap::FragTrap(void)
{
    std::cout << "FragTrap Default constructor called" << std::endl;
    this->_name = "FragTrap Without Name";
    this->fragInitValues();
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "FragTrap Name constructor called" << std::endl;
    this->fragInitValues();
    this->_name = name;
}

FragTrap::FragTrap(const FragTrap &FragTrap)
{
    std::cout << "FragTrap Copy constructor called" << std::endl;
    *this = FragTrap;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap Destructor called" << std::endl;
}

void    FragTrap::fragInitValues(void)
{
    std::cout << "FragTrap Init Values called" << std::endl;
    this->_attackDamage = 30;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
}

void    FragTrap::fragPrintValues(void) const
{
    std::cout << std::endl;
    std::cout << "FragTrap named "
        << this->_name
        << " Stats: " << std::endl
        << this->_hitPoints << " Hit Points" << std::endl
        << this->_energyPoints << " Energy Points" << std::endl
        << this->_attackDamage << " Attack Damage" << std::endl;
    std::cout << std::endl;
}

void    FragTrap::highFivesGuys(void)
{
    std::string line;
    
    std::cout << "FragTrap " << this->_name << ": 'Give me a 'five' !'"
        << std::endl;
    getline(std::cin, line);
    while (line != "five")
    {
        std::cout << "FragTrap " << this->_name << ": 'Give me a 'five' !'" << std::endl;
        getline(std::cin, line);
        if (std::cin.eof())
            break ;
    }
}

FragTrap    &FragTrap::operator=(const FragTrap &FragTrap)
{
    std::cout << "Copy operator called" << std::endl;
    if (this == &FragTrap)
        return (*this);
    this->_name = FragTrap._name;
    this->_attackDamage = FragTrap._attackDamage;
    this->_hitPoints = FragTrap._hitPoints;
    this->_energyPoints = FragTrap._energyPoints;
    return (*this);
}
