/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <tdeville@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:12:36 by theodeville       #+#    #+#             */
/*   Updated: 2022/12/06 10:49:17 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{

public:
    
    Weapon(void);
    Weapon(const std::string &type);
    ~Weapon(void);

    const std::string   &getType(void) const;
    void                setType(const std::string &type);

private:

    std::string _type;

};

#endif