/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <tdeville@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 13:24:05 by tdeville          #+#    #+#             */
/*   Updated: 2023/01/11 14:34:58 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"
#include <iostream>

template<typename T>
void    increment(T &val)
{
    val++;
}

template<typename T>
void    change_by_a(T &val)
{
    val = "a";
}

void    incr(int &val)
{
    val++;
}


int main()
{
    int tab[] = {0,0,0,0,0,0,0,0};
    float ftab[] = {0.5f,0.5f,0.5f,0.5f,0.5f,0.5f,0.5f};

    std::string arr[3] = {
        "bonjour",
        "non",
        "ok"
    };
    
    iter(tab, 8, increment);
    iter(ftab, 7, increment);
    iter(arr, 3, change_by_a);

    std::cout << tab[0];
    std::cout << tab[1];
    std::cout << tab[2];
    std::cout << "\n\n";
    
    std::cout << ftab[0] << " ";
    std::cout << ftab[1] << " ";
    std::cout << ftab[2] << " ";
    std::cout << "\n\n";
    
    std::cout << arr[0] << " ";
    std::cout << arr[1] << " ";
    std::cout << arr[2] << " ";
    std::cout << "\n\n";

    iter(tab, 8, incr);
    std::cout << tab[0];
    std::cout << tab[1];
    std::cout << tab[2];
    return (0);
}
