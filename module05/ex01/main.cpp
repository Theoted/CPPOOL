/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <tdeville@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 11:18:23 by tdeville          #+#    #+#             */
/*   Updated: 2023/01/05 13:16:45 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void    demote_n(Bureaucrat &Bureaucrat, size_t N)
{
    for (size_t i = 0; i < N; i++)
    {
        if ((Bureaucrat.getGrade() + 1) > 150)
        {
            std::cerr << "Grade 150 reach, can't promote below" << std::endl;
            break ;
        }
        Bureaucrat.demote();
    }
}

void    upgrade_n(Bureaucrat &Bureaucrat, size_t N)
{
    for (size_t i = 0; i < N; i++)
    {
        if ((Bureaucrat.getGrade() - 1) < 1)
        {
            std::cerr << "Grade 1 reach, can't promote above" << std::endl;
            break ;
        }
        Bureaucrat.upgrade();
    }
}

int main()
{
    Bureaucrat  C("Chris", 2);
    std::cout << "\n";
    try
    {
        Form        Fa("Form A", 150, 150);
        std::cout << Fa.getSigned() << "\n";
        C.signForm(Fa);
        std::cout << Fa.getSigned() << "\n";


        demote_n(C, 1000);
        Form        Fb("Form B", 50, 50);
        std::cout << Fb.getSigned() << "\n";
        C.signForm(Fb);
        std::cout << Fb.getSigned() << "\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "_______________________________\n\n";
    try
    {
        Bureaucrat I("Gilles", 150);
        I.demote();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "_______________________________\n\n";
    try
    {
        Form F("Form123", 150, 100);
        std::cout << F << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return (0);
}
