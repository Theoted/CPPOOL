/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <tdeville@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:27:55 by theodeville       #+#    #+#             */
/*   Updated: 2022/12/06 11:09:46 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

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