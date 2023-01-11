/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <tdeville@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:53:24 by theodeville       #+#    #+#             */
/*   Updated: 2023/01/05 14:47:57 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Intern default constructor called" << std::endl;
    setForms();
}

Intern::Intern(const Intern &Intern)
{
    (void)Intern;
    setForms();
    std::cout << "Intern Copy constructor called" << std::endl;
}

Intern::~Intern()
{
    std::cout << "Intern destructor called" << std::endl;
}

Intern  &Intern::operator=(const Intern &Intern)
{
    std::cout << "Intern Overloaded operator = called" << std::endl;
    setForms();
    (void)Intern;
    return (*this);
}

AForm *Intern::makeForm(const std::string &formName, const std::string &targetName) const
{
    size_t  id = -1;
    AForm   *form = nullptr;
    
    for (size_t i = 0; i < 3; i++)
    {
        if (formName == _forms[i])
            id = i;
    }

    switch (id)
    {
    case 0:
        form = new RobotomyRequestForm("", targetName);
        break;

    case 1:
        form = new ShrubberyCreationForm("", targetName);
        break;
                
    case 2:
        form = new PresidentialPardonForm("", targetName);
        break;

    default:
        throw FormDoesNotExist();
    }

    std::cout << "Intern creates " << formName << std::endl;
    return (form);
}


// SETTER
void Intern::setForms()
{
    _forms[0] = "robotomy request";
    _forms[1] = "shrubbery creation";
    _forms[2] = "presidential pardon";
}

