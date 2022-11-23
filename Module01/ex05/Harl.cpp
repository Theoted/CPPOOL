/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <tdeville@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:08:48 by tdeville          #+#    #+#             */
/*   Updated: 2022/11/07 14:15:17 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void )
{
    std::cout << "Constructor Called" << std::endl;
    this->complaints[0].msg = "debug";
	this->complaints[0].action = &Harl::debug;
	this->complaints[1].msg = "info";
	this->complaints[1].action = &Harl::info;
	this->complaints[2].msg = "warning";
	this->complaints[2].action = &Harl::warning;
	this->complaints[3].msg = "error";
	this->complaints[3].action = &Harl::error;
}

Harl::~Harl( void )
{
    std::cout << "Destructor Called" << std::endl;
}

void    Harl::debug( void )
{
    std::cout
        << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger."
        << "I really do !" << std::endl << std::endl;
}

void    Harl::info( void )
{
    std::cout
        << "I cannot believe adding extra bacon costs more money." << std::endl
        << "You didn’t put enough bacon in my burger !" << std::endl
        << "If you did, I wouldn’t be asking for more !" << std::endl << std::endl;
}

void    Harl::warning( void )
{
    std::cout
        << "I think I deserve to have some extra bacon for free." << std::endl
        << "I’ve been coming for years whereas you started working here since last month." << std::endl << std::endl;
}

void    Harl::error( void )
{
    std::cout
        << "This is unacceptable !" << std::endl
        << "I want to speak to the manager now." << std::endl << std::endl;
}

void    Harl::complain( std::string level )
{
    size_t  i;

    i = 0;
    while (i < 4)
    {
        if (!strcmp(level.c_str(), this->complaints[i].msg.c_str()))
            return (this->*(complaints[i].action))();
        i++;
    }
    std::cerr << "Unknown Complaint" << std::endl << std::endl;
}
