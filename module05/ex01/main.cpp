/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <tdeville@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 11:18:23 by tdeville          #+#    #+#             */
/*   Updated: 2022/12/07 11:26:25 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat  A("Gilles");
    Bureaucrat  B;
    Bureaucrat  C("Chris", 2);
    try
    {
        Bureaucrat I("Gilles", 45);
        A = I;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << A << std::endl;
    std::cout << B << std::endl;
    return (0);
}
