/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <tdeville@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:37:41 by tdeville          #+#    #+#             */
/*   Updated: 2022/11/02 16:04:13 by tdeville         ###   ########lyon.fr   */
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

    Zombie( void );
    Zombie( string name );
    ~Zombie( void );

    void    announce( void ) const;
    
    string  getName( void ) const;
    void    setName( string name );


private:
    
    string _name;

};

Zombie  *zombieHorde( int N, string name );

#endif
