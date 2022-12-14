/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theodeville <theodeville@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:53:36 by theodeville       #+#    #+#             */
/*   Updated: 2022/12/02 13:12:23 by theodeville      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{

public:

    Animal(void);
    Animal(const Animal &Animal);
    virtual ~Animal(void);

    Animal  &operator=(const Animal &Animal);

    std::string         getType(void) const;
    virtual void        makeSound(void) const;

protected:

    std::string type;

};

#endif
