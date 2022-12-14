/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theodeville <theodeville@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:53:36 by theodeville       #+#    #+#             */
/*   Updated: 2022/11/30 15:30:10 by theodeville      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{

public:

    WrongAnimal(void);
    WrongAnimal(const WrongAnimal &WrongAnimal);
    virtual ~WrongAnimal(void);

    WrongAnimal  &operator=(const WrongAnimal &WrongAnimal);

    virtual void        makeSound(void) const;
    std::string         getType(void) const;

protected:

    std::string type;

};

#endif
