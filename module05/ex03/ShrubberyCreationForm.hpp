/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theodeville <theodeville@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:53:36 by theodeville       #+#    #+#             */
/*   Updated: 2022/11/30 15:30:10 by theodeville      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include <fstream>

class ShrubberyCreationForm : public AForm
{

public:

    ShrubberyCreationForm();
    ShrubberyCreationForm(const std::string name, const std::string &target);
    ShrubberyCreationForm(const std::string &target);
    ShrubberyCreationForm(const ShrubberyCreationForm &ShrubberyCreationForm);
    ~ShrubberyCreationForm();

    void    createShrubbery(const std::string &target) const;
    void    execute(Bureaucrat const &executor) const;

private:
    
    ShrubberyCreationForm  &operator=(const ShrubberyCreationForm &ShrubberyCreationForm);
    
    std::string   _target;

};

#endif
