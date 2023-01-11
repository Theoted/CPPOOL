/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theodeville <theodeville@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 18:09:12 by theodeville       #+#    #+#             */
/*   Updated: 2023/01/11 18:50:50 by theodeville      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"
# include "Array.cpp"

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;

        if (i < 3)
        {
            std::cout << "numbers[" << i << "] = " << numbers[i] << std::endl; 
            std::cout << "mirror[" << i << "] = " << mirror[i] << std::endl; 
        }
    }
    //SCOPE
    {
        std::cout << "\n\n";
        Array<int> tmp = numbers;
        Array<int> test(tmp);

        std::cout << tmp[10] << std::endl;
        std::cout << test[10] << std::endl;
        std::cout << tmp[11] << std::endl;
        std::cout << test[11] << std::endl;
        std::cout << tmp[12] << std::endl;
        std::cout << test[12] << std::endl;
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        std::cout << "\nwill throw exception:\n";
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << "\nwill throw exception: (have to -1)\n";
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << "\n\n";
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
        if (i < 10)
            std::cout << numbers[i] << std::endl;
    }
    delete [] mirror;//


    Array<char> str(10);

    str[0] = 'b';
    str[1] = 'o';
    str[2] = 'n';
    str[3] = 'j';
    str[4] = 'o';
    str[5] = 'u';
    str[6] = 'r';
    str[7] = 'r';
    str[8] = 'r';
    str[9] = 'r';

    for (int i = 0; i < str.size(); i++)
    {
        std::cout << str[i];
    }

    return 0;
} 