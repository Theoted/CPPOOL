/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theodeville <theodeville@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:12:27 by theodeville       #+#    #+#             */
/*   Updated: 2022/11/04 14:02:34 by theodeville      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanB
{

public:

    HumanB( std::string name );
    ~HumanB( void );

    void    attack( void ) const;
    void    setWeapon( Weapon & Weapon );

private:

    std::string _name;
    Weapon      *_Weapon;
    
};

#endif
