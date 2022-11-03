/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theodeville <theodeville@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:10:51 by theodeville       #+#    #+#             */
/*   Updated: 2022/11/03 20:36:26 by theodeville      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

int main()
{
    Weapon arme;

    arme.setType("Fusil D'assaut");
    
    string const & type = arme.getType();

    cout << arme.getType() << endl;
 
    cout << arme.getType() << endl;
    
    return ( 0 );
}