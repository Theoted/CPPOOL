/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <tdeville@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 11:18:23 by tdeville          #+#    #+#             */
/*   Updated: 2023/01/05 14:44:08 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    {
        Intern someRandomIntern;
        AForm *rrf;
        AForm *rrff;
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        rrff = someRandomIntern.makeForm("presidential pardon", "Gonnot");
        
        std::cout << "\n\n";
        
        std::cout << *rrf << "\n\n\n";

        Bureaucrat  Marcus("Marcus", 150);
        try
        {
            Marcus.signForm(*rrf);
            Marcus.executeForm(*rrf);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << "\n";        
        }
        delete rrf;
        delete rrff;
    }
    {
        Intern someRandomIntern;
        AForm *rrf;
        
        try
        {
            rrf = someRandomIntern.makeForm("non nono nonoa", "Bender");
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    return (0);
}
