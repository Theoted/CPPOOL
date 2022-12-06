/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <tdeville@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:37:41 by tdeville          #+#    #+#             */
/*   Updated: 2022/12/06 10:35:43 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
    
public:

    Zombie(std::string name);
    ~Zombie(void);

    void    announce(void) const;
    
    const std::string  &getName(void) const;


private:
    
    std::string const    _name;

};

void    randomChump(std::string name);
Zombie* newZombie(std::string name);

#endif
