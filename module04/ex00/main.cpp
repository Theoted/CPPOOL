/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theodeville <theodeville@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:53:01 by theodeville       #+#    #+#             */
/*   Updated: 2022/12/02 13:12:04 by theodeville      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); // will output the cat sound!
    j->makeSound();
    meta->makeSound();

    delete meta;
    delete i;
    delete j;
    
    std::cout << std::endl;

    const WrongAnimal *wmeta = new WrongAnimal();
    const WrongAnimal *wi = new WrongCat();
    std::cout << wi->getType() << " " << std::endl;
    wi->makeSound(); // will output the cat sound!
    wmeta->makeSound();

    delete wmeta;
    delete wi;
    return (0);
}