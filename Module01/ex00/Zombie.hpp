/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <tdeville@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:37:41 by tdeville          #+#    #+#             */
/*   Updated: 2022/11/02 14:29:30 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

using std::cout;
using std::cin;
using std::cerr;
using std::endl;
using std::string;


class Zombie
{
    
public:

    Zombie( string name );
    ~Zombie( void );

    void    announce( void ) const;
    
    string  getName( void ) const;


private:
    
    string const    _name;

};

void    randomChump( string name );
Zombie* newZombie( string name );

#endif
