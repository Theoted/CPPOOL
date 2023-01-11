/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <tdeville@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 11:30:37 by tdeville          #+#    #+#             */
/*   Updated: 2023/01/11 11:50:22 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fn.hpp"
#include <iostream>

int main()
{
    {
        int i = 10;
        int j = 50;
        std::string a = "hello";
        std::string b = "cya";

        swap(i, j);
        swap(a, b);

        std::cout << i << " " << j << "\n";
        std::cout << a << " " << b << "\n";

        std::cout << min(i, j) << "\n";
        std::cout << max(i, j) << "\n\n\n";
    }
    {
        int a = 2;
        int b = 3;
        ::swap(a, b);
        std::cout << "a = " << a << ", b = " << b << std::endl;
        std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
        std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
        std::string c = "chaine1";
        std::string d = "chaine2";
        ::swap(c, d);
        std::cout << "c = " << c << ", d = " << d << std::endl;
        std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
        std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
    }

    return (0);
}
