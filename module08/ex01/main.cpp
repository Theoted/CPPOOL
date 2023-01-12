/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theodeville <theodeville@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 10:58:41 by theodeville       #+#    #+#             */
/*   Updated: 2023/01/12 14:33:23 by theodeville      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    {
        Span s(10);

        try
        {
            s.addNumber(5);
            s.addNumber(16);
            s.addNumber(5513);
            s.addNumber(35);
            s.addNumber(5431);
            s.addNumber(5165);
            s.addNumber(53);
            s.addNumber(56);
            s.addNumber(1);
            s.addNumber(2);
            s.addNumber(15);
            s.addNumber(1655);
            s.addNumber(-5);
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << '\n';
        }
        std::cout << s.longestSpan() << std::endl;
        s.printSpan();
        std::cout << s.shortestSpan();
    }
    std::cout << "\n\n";
    {
        Span sp = Span(5);
        try
        {
            sp.addNumber(6);
            sp.addNumber(3);
            sp.addNumber(17);
            sp.addNumber(9);
            sp.addNumber(11);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    std::cout << "\n\n";
    {
        Span sp = Span(5);
        try
        {
            std::cout << "First try\n";
            std::cout << sp.longestSpan() << std::endl;
            std::cout << "Second try\n";
            std::cout << sp.shortestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << "\n\n";
        }
        try
        {
            sp.addNumber(1);
            sp.addNumber(1);
            std::cout << "First try\n";
            std::cout << sp.shortestSpan() << std::endl;
            std::cout << "Second try\n";
            std::cout << sp.longestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    std::cout << "\n\n";
    {
        Span sp = Span(20);

        sp.addRandomNumbers();
        sp.printSpan();
    }

    return (0);
}