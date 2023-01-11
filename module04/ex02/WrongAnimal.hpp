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

    WrongAnimal();
    WrongAnimal(const WrongAnimal &WrongAnimal);
    virtual ~WrongAnimal();

    WrongAnimal  &operator=(const WrongAnimal &WrongAnimal);

    void            makeSound() const;
    std::string     getType() const;

protected:

    std::string _type;

};

#endif
