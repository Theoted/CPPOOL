/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <tdeville@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:12:27 by theodeville       #+#    #+#             */
/*   Updated: 2022/12/06 10:51:14 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanA
{

public:

    HumanA(const std::string &name, Weapon &Weapon);
    ~HumanA(void);

    void                attack(void) const;
    
private:

    std::string _name;
    Weapon      &_Weapon;
    
};

#endif
