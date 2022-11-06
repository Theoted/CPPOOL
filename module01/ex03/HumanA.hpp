/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theodeville <theodeville@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:12:27 by theodeville       #+#    #+#             */
/*   Updated: 2022/11/04 13:40:29 by theodeville      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanA
{

public:

    HumanA( std::string name, Weapon & Weapon );
    ~HumanA( void );

    void                attack( void ) const;
    
private:

    std::string _name;
    Weapon      &_Weapon;
    
};

#endif
