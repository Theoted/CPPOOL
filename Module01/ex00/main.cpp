/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <tdeville@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:50:51 by tdeville          #+#    #+#             */
/*   Updated: 2022/11/02 14:26:29 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
    Zombie* z = newZombie( "Erwan" );
    Zombie  za( "Zaz" );
    
    randomChump( "Theo" );

    z->announce();    
    delete z;

    return (0);
}
