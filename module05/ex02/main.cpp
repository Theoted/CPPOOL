/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <tdeville@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 11:18:23 by tdeville          #+#    #+#             */
/*   Updated: 2023/01/05 14:25:35 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    AForm *Pres = new PresidentialPardonForm("Pres", "Mon oncle");
    {
        Bureaucrat Ted("Ted", 140);
        Bureaucrat Theo("Theo", 10);
        AForm *Shrubbery = new ShrubberyCreationForm("Srubb", "paysage");
        AForm *Robotomy = new RobotomyRequestForm("Robotmoy", "Guy");
        
        std::cout << "|---------------------------------------------------------------\n";
        std::cout << "Print the forms: \n\n" << *Shrubbery << "\n\n"
            << *Robotomy << "\n\n"
            << *Pres << "\n\n";
        std::cout << "________________________________________________________________|\n";
        
        std::cout << "\nTry to do some stuff...\n\n\n";
        try
        {
            Ted.signForm(*Shrubbery);
            Ted.executeForm(*Shrubbery);
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << '\n';
        }

        try
        {
            Theo.executeForm(*Shrubbery);
            Theo.signForm(*Pres);
            Theo.executeForm(*Pres);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        
        delete Shrubbery;
        delete Robotomy;
    }
    std::cout << "\n\n\n";
    {
        Bureaucrat Theo("Theo", 1);
        AForm *Robotomy = new RobotomyRequestForm("Robotmoy", "Guy");
        Theo.signForm(*Robotomy);
        Theo.executeForm(*Robotomy);
        Theo.executeForm(*Pres);

        delete Robotomy;
    }
    
    delete Pres;
    
    return (0);
}
