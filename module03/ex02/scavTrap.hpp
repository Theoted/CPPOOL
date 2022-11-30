/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theodeville <theodeville@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:27:55 by theodeville       #+#    #+#             */
/*   Updated: 2022/11/30 12:38:33 by theodeville      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "clapTrap.hpp"

class ScavTrap : public ClapTrap
{

public:

    ScavTrap(void);
    ScavTrap(const std::string name);
    ScavTrap(const ScavTrap &ScavTrap);
    ~ScavTrap(void);

    ScavTrap        &operator=(const ScavTrap &ScavTrap);

    void            scavPrintValues(void) const;
    void            gateKeeper(void);

private:
 
    void            scavInitValues(void);

    unsigned int    gateKeeperState;

};

#endif