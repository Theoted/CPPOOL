/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <tdeville@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:27:55 by theodeville       #+#    #+#             */
/*   Updated: 2022/12/06 11:08:14 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

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