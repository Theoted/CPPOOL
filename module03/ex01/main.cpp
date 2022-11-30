/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theodeville <theodeville@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:50:02 by theodeville       #+#    #+#             */
/*   Updated: 2022/11/30 12:14:22 by theodeville      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scavTrap.hpp"

int main()
{
    ClapTrap    A("Fab");
    ScavTrap    B("Mon Fab");
    ScavTrap    C;
    ClapTrap    D;

    D = C;

    A.printValues();
    B.scavPrintValues();
    C.scavPrintValues();
    D.printValues();
    return (0);
}