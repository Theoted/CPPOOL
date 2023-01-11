/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <tdeville@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:50:02 by theodeville       #+#    #+#             */
/*   Updated: 2022/12/14 10:38:31 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap    *Ted = new FragTrap("Ted");
    ScavTrap    John("John");
    ClapTrap    Gilles;
    FragTrap    Tom("Tom");

    Ted->printValues();
    ((FragTrap *)Ted)->highFivesGuys();
    Ted->takeDamage(10);
    Ted->printValues();
    Ted->beRepaired(107890);
    Ted->attack("Guy");

    std::cout << "\n\n";

    John.takeDamage(6);
    John.beRepaired(1);
    John.printValues();
    

    std::cout << "\n\n";
    
    Gilles.printValues();
    Gilles = Tom;
    Gilles.printValues();

    Tom.takeDamage(1517983);
    Gilles.printValues();
    Tom.printValues();

    delete Ted;
    return (0);
}