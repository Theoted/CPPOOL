/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theodeville <theodeville@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:53:24 by theodeville       #+#    #+#             */
/*   Updated: 2022/11/30 15:01:27 by theodeville      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const std::string &idea)
{
    std::cout << "Brain assign ideas constructor called" << std::endl;
    for (size_t i = 0; i < 100; i++)
    {
        _ideas[i] = idea;
    }
}

Brain::Brain(const Brain &Brain)
{
    std::cout << "Brain Copy constructor called" << std::endl;
    *this = Brain;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain  &Brain::operator=(const Brain &Brain)
{
    std::cout << "Brain Overloaded operator = called" << std::endl;
    for (size_t i = 0; i < 100; i++)
    {
        _ideas[i] = Brain._ideas[i];
    }
    return (*this);
}


// GETTER
const std::string   &Brain::getIdea() const { return ( _ideas[0] ); }

// SETTER
void    Brain::setIdeas(const std::string &idea)
{
    for (size_t i = 0; i < 100; i++)
    {
        _ideas[i] = idea;
    }
}