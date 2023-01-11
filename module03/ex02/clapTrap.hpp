/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <tdeville@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:50:08 by theodeville       #+#    #+#             */
/*   Updated: 2022/12/14 10:22:56 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string> 

class   ClapTrap
{

public:

    ClapTrap();
    ClapTrap(const std::string &name);
    ClapTrap(const ClapTrap &ClapTrap);
    virtual ~ClapTrap();

    ClapTrap    &operator=(const ClapTrap &ClapTrap);

    // Member functions
    virtual void    printValues() const;
    void            takeDamage(unsigned int amount);
    void            beRepaired(unsigned int amount);
    virtual void    attack(const std::string &target);

    // Getters
    const std::string   &getName() const;
    unsigned int        getHitPoints() const;
    unsigned int        getEnergyPoints() const;
    unsigned int        getAttackDamage() const;
        
protected:

    std::string     _name;
    unsigned int    _hitPoints;
    unsigned int    _energyPoints;
    unsigned int    _attackDamage;

};

#endif
