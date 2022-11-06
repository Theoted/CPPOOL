/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theodeville <theodeville@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 16:59:34 by theodeville       #+#    #+#             */
/*   Updated: 2022/11/06 18:09:24 by theodeville      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

inline bool my_open(const char *file) {
    std::ifstream f(file);
    return f.good();
}

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cerr << "Arguments Error" << std::endl;
        return (1);
    }

    // if (!my_open(av[1]))
    // {
    //     std::cout << "Infile not found" << std::endl;
    //     return (1);
    // }
    std::ifstream   infile;
    std::ofstream   outfile(strcat(av[1], ".replace"));

    infile.open(av[1]);
    if (infile.is_open())
    {
        std::string str;

        std::getline(infile, str);

        std::cout << str << std::endl;
    }

    
    outfile.close();
    return (0);
}