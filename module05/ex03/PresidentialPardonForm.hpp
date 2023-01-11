/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theodeville <theodeville@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:53:36 by theodeville       #+#    #+#             */
/*   Updated: 2022/11/30 15:30:10 by theodeville      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{

public:

    PresidentialPardonForm();
    PresidentialPardonForm(const std::string &name, const std::string &target);
    PresidentialPardonForm(const std::string &target);
    PresidentialPardonForm(const PresidentialPardonForm &PresidentialPardonForm);
    ~PresidentialPardonForm();

    
    // Memer function
    void    presidentialPardon() const;
    void    execute(Bureaucrat const &executor) const;


private:

    PresidentialPardonForm  &operator=(const PresidentialPardonForm &PresidentialPardonForm);

    const std::string   _target;

};

#endif
