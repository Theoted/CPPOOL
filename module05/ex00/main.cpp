/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <tdeville@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 11:18:23 by tdeville          #+#    #+#             */
/*   Updated: 2023/01/05 13:08:09 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat Theo("Theo", 150);
        Bureaucrat Ted("Ted", 159);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    try
    {
        Bureaucrat Theo("Theo", 150);
        Theo.demote();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    try
    {
        Bureaucrat Theo("Theo", 0);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    try
    {
        Bureaucrat Theo("Theo", 1);
        Theo.upgrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        Bureaucrat Theo("Theo", 10);
        std::cout << Theo << std::endl;
        std::cout << Theo.getName() << std::endl;
        std::cout << Theo.getGrade() << std::endl;
        
        std::cout << std::endl;

        Bureaucrat Ted(Theo);
        Theo.upgrade();
        Theo.upgrade();
        std::cout << Theo.getGrade() << std::endl;
        std::cout << Ted << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}
