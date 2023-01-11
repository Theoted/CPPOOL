/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <tdeville@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:27:55 by theodeville       #+#    #+#             */
/*   Updated: 2022/12/14 10:23:13 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

public:

    ScavTrap();
    ScavTrap(const std::string &name);
    ScavTrap(const ScavTrap &ScavTrap);
    ~ScavTrap();

    ScavTrap        &operator=(const ScavTrap &ScavTrap);

    void            printValues() const;
    void            guardGate();
    void            attack(const std::string &target);

private:

    void            initValues();

    unsigned int    _gateKeeperState;

};

#endif