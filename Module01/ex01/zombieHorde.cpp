/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <tdeville@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:30:16 by tdeville          #+#    #+#             */
/*   Updated: 2022/12/09 11:04:14 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *zombieHorde(int N, std::string name)
{
    if (N < 0)
    {
        std::cerr << "Negative hord nb" << std::endl;
        return (nullptr);
    }
    
    int i;

    i = -1;
    Zombie* z = new Zombie[N];
    

    while (++i < N)
        z[i].setName( name );
    
    return (z);
}
