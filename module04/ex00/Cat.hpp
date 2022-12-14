/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theodeville <theodeville@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:53:36 by theodeville       #+#    #+#             */
/*   Updated: 2022/11/30 15:01:59 by theodeville      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{

public:

    Cat(void);
    Cat(const Cat &Cat);
    ~Cat(void);

    Cat     &operator=(const Cat &Cat);

    virtual void    makeSound(void) const;

};

#endif
