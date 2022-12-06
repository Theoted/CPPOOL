/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <tdeville@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:30:16 by tdeville          #+#    #+#             */
/*   Updated: 2022/12/06 10:43:46 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *zombieHorde(int N, std::string name)
{
    int i;

    i = -1;
    Zombie* z = new Zombie[N];
    
    if (N < 0)
        std::cout << "Negative hord nb" << std::endl;

    while (++i < N)
        z[i].setName( name );
    
    return (z);
}
