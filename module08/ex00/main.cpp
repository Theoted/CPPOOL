/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theodeville <theodeville@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 09:12:04 by theodeville       #+#    #+#             */
/*   Updated: 2023/01/12 10:11:16 by theodeville      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.cpp"
#include <vector>
#include <list>

template<typename T>
void    print_t(T t)
{
    std::cout << t << " ";
}

int main()
{
    std::vector<int>    vect;
    std::list<int>      list;

    vect.push_back(1);
    vect.push_back(2);
    vect.push_back(3);
    vect.push_back(4);
    vect.push_back(5);

    list.push_back(1);
    list.push_back(2);
    list.push_back(3);
    list.push_back(4);
    list.push_back(5);

    std::for_each(vect.begin(), vect.end(), print_t<int>);
    std::cout << "\n";
    std::for_each(list.begin(), list.end(), print_t<int>);
    std::cout << "\n";
    
    
    std::cout << easyfind<std::vector<int> >(vect, 44) << std::endl;
    std::cout << "\n";
    std::cout << easyfind<std::list<int> >(list, 1) << std::endl;
}