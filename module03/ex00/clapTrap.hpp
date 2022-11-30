/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theodeville <theodeville@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:50:08 by theodeville       #+#    #+#             */
/*   Updated: 2022/11/30 11:39:33 by theodeville      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class   ClapTrap
{

public:
    ClapTrap(void);
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &ClapTrap);
    ~ClapTrap(void);

    ClapTrap    &operator=(const ClapTrap &ClapTrap);

    void    printValues(void) const;

    void    attack(const std::string& target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
        
private:

    std::string     _name;
    unsigned int    _hitPoints;
    unsigned int    _energyPoints;
    unsigned int    _attackDamage;

    void    initValues(void);

};

#endif
