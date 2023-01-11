/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <tdeville@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:53:36 by theodeville       #+#    #+#             */
/*   Updated: 2023/01/05 14:28:46 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{

    class FormDoesNotExist : public std::exception
    {
        public:
            virtual const char *what() const throw(){return ("Form Does Not Exist\n");}
    };

public:

    Intern(void);
    Intern(const Intern &Intern);
    ~Intern(void);

    Intern  &operator=(const Intern &Intern);

    AForm   *makeForm(const std::string &formName, const std::string &targetName) const;
    
    // SETTER
    void    setForms();


private:

    std::string _forms[3];

};

#endif
