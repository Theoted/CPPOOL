/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theodeville <theodeville@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 08:46:44 by theodeville       #+#    #+#             */
/*   Updated: 2023/01/12 10:04:34 by theodeville      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

template<typename Container>
int easyfind(const Container &c, int toFind)
{
    typename Container::const_iterator location = std::find(c.begin(), c.end(), toFind);

    if (location != c.end())
        return (std::distance(c.begin(), location));
    return (-1);
}
