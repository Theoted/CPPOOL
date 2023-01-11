/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theodeville <theodeville@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:53:24 by theodeville       #+#    #+#             */
/*   Updated: 2022/11/30 15:01:27 by theodeville      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() :
    AForm("", 72, 45)
{
    std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) :
    AForm("", 72, 45), _target(target)
{
    std::cout << "RobotomyRequestForm target assignation constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &name, const std::string &target) :
    AForm(name, 72, 45), _target(target)
{
    std::cout << "RobotomyRequestForm name and trget assignation constructor called" << std::endl;
}


RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &RobotomyRequestForm) :
    AForm(RobotomyRequestForm._name, 72, 45), _target(RobotomyRequestForm._target)
{
    std::cout << "RobotomyRequestForm Copy constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm  &RobotomyRequestForm::operator=(const RobotomyRequestForm &RobotomyRequestForm)
{
    std::cout << "RobotomyRequestForm Overloaded operator does't work" << std::endl;
    (void) RobotomyRequestForm;
    return (*this);
}

// Member function
void    RobotomyRequestForm::robotomyRequest() const
{
    std::cout << "brrrrrrrrrrrr..." << std::endl;
    
    std::srand(std::time(0));

    bool n = (std::rand() & 1);
    
    if (n)
        std::cout << "Robotomy of " << _target << " succeded\n";
    else
        std::cout << "Robotomy of " << _target << " unsucceded\n";
}


void    RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (_signed == 0)
        throw RobotomyRequestForm::FormNotSignedException();
    if (executor.getGrade() > _gradeToExecute)
        throw RobotomyRequestForm::GradeTooLowException();
    robotomyRequest();
}