/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <tdeville@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:27:55 by theodeville       #+#    #+#             */
/*   Updated: 2022/12/14 10:33:00 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

public:

    FragTrap();
    FragTrap(const std::string name);
    FragTrap(const FragTrap &FragTrap);
    ~FragTrap();

    FragTrap        &operator=(const FragTrap &FragTrap);

    void            printValues() const;
    void            highFivesGuys();
    void            attack(const std::string &target);

private:
 
    void            initValues();

};

#endif