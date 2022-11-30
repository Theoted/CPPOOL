/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theodeville <theodeville@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:27:55 by theodeville       #+#    #+#             */
/*   Updated: 2022/11/30 12:37:40 by theodeville      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "clapTrap.hpp"

class FragTrap : public ClapTrap
{

public:

    FragTrap(void);
    FragTrap(const std::string name);
    FragTrap(const FragTrap &FragTrap);
    ~FragTrap(void);

    FragTrap        &operator=(const FragTrap &FragTrap);

    void            fragPrintValues(void) const;
    void            highFivesGuys(void);

private:
 
    void            fragInitValues(void);

};

#endif