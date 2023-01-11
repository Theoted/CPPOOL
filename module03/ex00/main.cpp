/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <tdeville@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:50:02 by theodeville       #+#    #+#             */
/*   Updated: 2022/12/14 09:37:22 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap    Lulu("Lulu");
    ClapTrap    Theo("Theo");
    ClapTrap    Igor;

    Igor.takeDamage(5);
    Igor.printValues();
    Igor = Theo;
    Igor.printValues();
    
    std::cout << "\n\n\n";
    
    Igor.takeDamage(9);
    Igor.printValues();
    std::cout << "\n";
    Theo.printValues();
    
    std::cout << "\n\n\n";

    Lulu.takeDamage(500);
    Lulu.printValues();
    Lulu.attack("A guy");
    Lulu.beRepaired(1000);
    
    return (0);
}