/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <tdeville@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:37:41 by tdeville          #+#    #+#             */
/*   Updated: 2022/12/06 10:43:29 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
    
public:

    Zombie(void);
    Zombie(std::string name);
    ~Zombie(void);

    void    announce(void) const;
    
    std::string     getName(void) const;
    void            setName(std::string name);


private:
    
    std::string _name;

};

Zombie  *zombieHorde(int N, std::string name);

#endif
