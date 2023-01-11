/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theodeville <theodeville@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:53:36 by theodeville       #+#    #+#             */
/*   Updated: 2022/11/30 15:30:10 by theodeville      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{

public:

    Brain();
    Brain(const std::string &idea);
    Brain(const Brain &Brain);
    ~Brain();

    Brain  &operator=(const Brain &Brain);

    // Getter
    const std::string   &getIdea() const;

    // Setter
    void    setIdeas(const std::string &idea);

protected:

    std::string _ideas[100];

};

#endif
