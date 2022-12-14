/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theodeville <theodeville@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:53:01 by theodeville       #+#    #+#             */
/*   Updated: 2022/12/02 13:15:59 by theodeville      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal *tab[100];

    int i = -1;
    while (++i < 49)
        tab[i] = new Cat();

    while (++i < 99)
        tab[i] = new Dog();
    
    i = -1;
    while (++i < 99)
        delete tab[i];
    return (0);
}
