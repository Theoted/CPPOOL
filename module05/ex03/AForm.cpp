/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theodeville <theodeville@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:53:24 by theodeville       #+#    #+#             */
/*   Updated: 2022/11/30 15:01:27 by theodeville      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void) :  _name("NoNameForm"), _signed(false),
                    _gradeToSign(150), _gradeToExecute(150)
{
    std::cout << "AForm default constructor called" << std::endl;
}

AForm::AForm(const std::string &name, unsigned int gradeToSign,
            unsigned int gradeToExecute) : 
                _name(name), _signed(false), _gradeToSign(gradeToSign),
                _gradeToExecute(gradeToExecute)
{
    if (gradeToExecute > 150 || gradeToSign > 150)
        throw AForm::GradeTooLowException();
    if (gradeToExecute < 1 || gradeToSign < 1)
        throw AForm::GradeTooHighException();
    std::cout << "AForm all initialize constructor called" << std::endl;
}

AForm::AForm(const AForm &AForm) :  _name(AForm.getName()), _signed(AForm.getSigned()),
                                _gradeToSign(AForm.getGradeToSign()),
                                _gradeToExecute(AForm.getGradeToExecute())
{
    std::cout << "AForm Copy constructor called" << std::endl;
}

AForm::~AForm(void)
{
    std::cout << "AForm destructor called" << std::endl;
}

AForm  &AForm::operator=(const AForm &AForm)
{
    std::cout << "AForm Overloaded operator can't be called because of const attributes" << std::endl;
    (void)AForm;
    return (*this);
}

std::ostream &operator<<(std::ostream &o, AForm &AForm)
{
    o << "Name: " << AForm.getName() << ", Signed: " << AForm.getSigned() << ", Grade to sign: "
        << AForm.getGradeToSign() << ", Grade to execute: " << AForm.getGradeToExecute();
    return (o);
}

// Accessors
const std::string   &AForm::getName() const
{
    return (_name);
}

void    AForm::setSigned(bool b)
{
    _signed = b;
}

bool    AForm::getSigned() const
{
    return (_signed);
}

unsigned int  AForm::getGradeToSign() const
{
    return (_gradeToSign);
}

unsigned int  AForm::getGradeToExecute() const
{
    return (_gradeToExecute);
}

// Member Functions
void    AForm::beSigned(const Bureaucrat &Bureaucrat)
{
    if (Bureaucrat.getGrade() > getGradeToSign())
        throw AForm::GradeTooLowException();
    setSigned(true);
}
