/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <tdeville@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:30:16 by tdeville          #+#    #+#             */
/*   Updated: 2022/11/02 14:38:03 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *zombieHorde( int N, string name )
{
    int i;

    i = -1;
    Zombie* z = new Zombie[N];
    
    if (N < 0)
        cout << "Negative hord nb" << endl;

    while (++i < N)
        z[i].setName( name );
    
    return ( z );
}
