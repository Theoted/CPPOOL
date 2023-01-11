/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theodeville <theodeville@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:53:24 by theodeville       #+#    #+#             */
/*   Updated: 2022/11/30 15:01:27 by theodeville      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() :
    AForm("", 25, 5)
{
    std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) :
    AForm("", 25, 5), _target(target)
{
    std::cout << "PresidentialPardonForm init target constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &name, const std::string &target) :
    AForm(name, 25, 5), _target(target)
{
    std::cout << "PresidentialPardonForm init name and target constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &PresidentialPardonForm) :
    AForm(PresidentialPardonForm._name, 25, 5), _target(PresidentialPardonForm._target)
{
    std::cout << "PresidentialPardonForm Copy constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm  &PresidentialPardonForm::operator=(const PresidentialPardonForm &PresidentialPardonForm)
{
    std::cout << "PresidentialPardonForm Overloaded operator doesn't work" << std::endl;
    (void)PresidentialPardonForm;
    return (*this);
}

// Member functions
void    PresidentialPardonForm::presidentialPardon() const
{
    std::cout << _target << " has been forgiven by Zaphod Beeblebrox\n";
}

void    PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (_signed == 0)
        throw PresidentialPardonForm::FormNotSignedException();
    if (executor.getGrade() > _gradeToExecute)
        throw PresidentialPardonForm::GradeTooLowException();
    presidentialPardon();
}
