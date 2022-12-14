/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <tdeville@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:12:27 by theodeville       #+#    #+#             */
/*   Updated: 2022/12/06 10:52:20 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanB
{

public:

    HumanB(const std::string &name);
    ~HumanB(void);

    void    attack(void) const;
    void    setWeapon(Weapon &Weapon);

private:

    std::string _name;
    Weapon      *_Weapon;
    
};

#endif
