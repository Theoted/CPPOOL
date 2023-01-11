/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <tdeville@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 13:55:00 by tdeville          #+#    #+#             */
/*   Updated: 2022/12/16 13:59:34 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    // We can't instantiate
    // const AAnimal A;
    const AAnimal *tab[5];

    std::cout << "Creation of Animal tab\n";

    for (size_t i = 0; i < 5; i++)
    {
        if (i % 2)
            tab[i] = new Cat;
        else
            tab[i] = new Dog("I want bones");
    }
    
    std::cout << "\n\n\n";

    std::cout << "Get Type of two different Animals in the tab\n";
    std::cout << tab[0]->getType() << std::endl;
    std::cout << tab[1]->getType() << std::endl;

    std::cout << "\n\n\n";

    std::cout << "Creation of two dogs with different brains and one dog with default constructor\n";
    std::cout << "------------------------------------------\n";
    Dog *A = new Dog("I want bones");
    Dog *B = new Dog("I dont want bones");
    Dog C;
    std::cout << "------------------------------------------\n\n\n";
    
    std::cout << "------------------------------------------\n";
    std::cout << "Print ideas of dog A and B\n";
    std::cout << "Idea of A: " << A->getBrain().getIdea() << std::endl;
    std::cout << "Idea of B: " << B->getBrain().getIdea() << std::endl;
    std::cout << "------------------------------------------\n\n\n";
    
    std::cout << "------------------------------------------\n";
    std::cout << "DEEP COPY TEST\nAssign C = B, print both " <<
        "ideas, then destroy B ideas and lets see that C ideas\nhave not change\n\n";
    C = *B;
    std::cout << "\n";
    std::cout << "Idea of B: " << B->getBrain().getIdea() << std::endl;
    std::cout << "Idea of C: " << C.getBrain().getIdea() << std::endl;
    std::cout << "Now destroy B: \n";
    delete B;
    std::cout << "\n" << C.getBrain().getIdea() << std::endl;
    std::cout << "\nDestroy A: \n";
    delete A;
    std::cout << "------------------------------------------\n\n\n";
    

    
    std::cout << "\n\n\n";

    for (size_t i = 0; i < 5; i++)
    {
        delete tab[i];
    }
    std::cout << "\n\n\n";
    return (0);
}
