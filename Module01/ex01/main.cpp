/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <tdeville@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:50:51 by tdeville          #+#    #+#             */
/*   Updated: 2022/12/09 11:05:04 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
    int i = -1;
    int N = 42;

    Zombie* z = zombieHorde(N, "Charles");

    while(++i < N)
        z[i].announce();
    
    if (z)
        delete [] z;
    
    return (0);
}
