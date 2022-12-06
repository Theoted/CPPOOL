/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <tdeville@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:50:02 by theodeville       #+#    #+#             */
/*   Updated: 2022/12/06 11:08:34 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

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