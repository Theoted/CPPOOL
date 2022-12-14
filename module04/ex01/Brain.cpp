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

Brain::Brain(void)
{
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &Brain)
{
    std::cout << "Brain Copy constructor called" << std::endl;
    int i = -1;
    while (++i < 99)
        this->ideas[i] = Brain.ideas[i];
}

Brain::~Brain(void)
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain  &Brain::operator=(const Brain &Brain)
{
    std::cout << "Brain Overloaded operator = called" << std::endl;
    int i = -1;
    while (++i < 99)
        this->ideas[i] = Brain.ideas[i];
    return (*this);
}
