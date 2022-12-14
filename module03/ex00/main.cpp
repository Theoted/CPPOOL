/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <tdeville@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:50:02 by theodeville       #+#    #+#             */
/*   Updated: 2022/12/06 11:07:44 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

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