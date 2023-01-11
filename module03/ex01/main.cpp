/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <tdeville@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:50:02 by theodeville       #+#    #+#             */
/*   Updated: 2022/12/14 10:18:54 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    {
        ClapTrap *Ted = new ScavTrap("Ted");
        ScavTrap Lulu("Lulu");
        ClapTrap Max("Max");
        ClapTrap Guy;

        Ted->printValues();
        Lulu.printValues();
        Max.printValues();
        Lulu.guardGate();

        std::cout << "\n\n\n";

        Guy.printValues();
        Guy = Lulu;
        Guy.printValues();

        std::cout << "\n\n\n";
        Guy.attack("A guy");
        Guy.takeDamage(1561943);
        Guy.beRepaired(13424);
        Guy.printValues();
        Lulu.printValues();

        delete Ted;
    }
    std::cout << "\n\n\n";
    {
        ClapTrap    Ted("Ted");
        ScavTrap    Teddy("Teddy");
        ClapTrap    Lolo("Lolo");
    }
    return (0);
}
