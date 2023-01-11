/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theodeville <theodeville@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:53:36 by theodeville       #+#    #+#             */
/*   Updated: 2022/12/02 14:32:53 by theodeville      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include <string>

class AAnimal
{

public:

    AAnimal();
    AAnimal(const AAnimal &AAnimal);
    virtual ~AAnimal(void);

    AAnimal  &operator=(const AAnimal &AAnimal);

    const std::string   &getType() const;
    virtual void        makeSound() const = 0;

protected:

    std::string _type;

};

#endif
