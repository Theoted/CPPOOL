/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theodeville <theodeville@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:50:02 by theodeville       #+#    #+#             */
/*   Updated: 2022/11/30 11:52:25 by theodeville      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "clapTrap.hpp"

int main()
{
    ClapTrap    A;
    ClapTrap    B("Fab");
    ClapTrap    C;

    C = A;

    A.printValues();
    B.printValues();
    C.printValues();

    A.attack("Chris");
    A.takeDamage(5);
    C.beRepaired(10);
    
    A.printValues();
    B.printValues();
    C.printValues();
    return (0);
}