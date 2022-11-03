/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theodeville <theodeville@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:12:36 by theodeville       #+#    #+#             */
/*   Updated: 2022/11/03 20:35:50 by theodeville      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

using std::string;
using std::cout;
using std::endl;

class Weapon
{

public:
    
    Weapon( void );
    ~Weapon( void );

    string const &  getType( void );
    void            setType( string const type);

private:

    string  _type;

};

#endif