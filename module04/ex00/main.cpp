/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <tdeville@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:53:01 by theodeville       #+#    #+#             */
/*   Updated: 2022/12/14 11:46:32 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    {
        const Animal *meta = new Animal();
        const Animal *j = new Dog();
        const Animal *i = new Cat();

        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        i->makeSound();
        j->makeSound();
        meta->makeSound();

        delete meta;
        delete i;
        delete j;

        std::cout << std::endl;

        const WrongAnimal *wmeta = new WrongAnimal();
        const WrongAnimal *wi = new WrongCat();
        std::cout << wi->getType() << " " << std::endl;
        wi->makeSound();
        wmeta->makeSound();

        delete wmeta;
        delete wi;
    }
    std::cout << "\n\n\n";
    {
        const Animal    *Dogo = new Cat();
        const Cat       Jerem;
        const Animal    Greg;
        
        Dogo->makeSound();
        Jerem.makeSound();
        Greg.makeSound();
        
        delete Dogo;
    }
    return (0);
}