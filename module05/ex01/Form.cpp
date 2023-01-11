/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theodeville <theodeville@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:53:24 by theodeville       #+#    #+#             */
/*   Updated: 2022/11/30 15:01:27 by theodeville      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) :  _name("NoNameForm"), _signed(false),
                    _gradeToSign(150), _gradeToExecute(150)
{
    std::cout << "Form default constructor called" << std::endl;
}

Form::Form(const std::string &name, unsigned int gradeToSign,
            unsigned int gradeToExecute) : 
                _name(name), _signed(false), _gradeToSign(gradeToSign),
                _gradeToExecute(gradeToExecute)
{
    if (gradeToExecute > 150 || gradeToSign > 150)
        throw Form::GradeTooLowException();
    if (gradeToExecute < 1 || gradeToSign < 1)
        throw Form::GradeTooHighException();
    std::cout << "Form all initialize constructor called" << std::endl;
}

Form::Form(const Form &Form) :  _name(Form.getName()), _signed(Form.getSigned()),
                                _gradeToSign(Form.getGradeToSign()),
                                _gradeToExecute(Form.getGradeToExecute())
{
    std::cout << "Form Copy constructor called" << std::endl;
}

Form::~Form(void)
{
    std::cout << "Form destructor called" << std::endl;
}

Form  &Form::operator=(const Form &Form)
{
    std::cerr << "Form equal operator doesn't work because of const attributes" << std::endl;
    (void)Form;
    return (*this);
}

std::ostream &operator<<(std::ostream &o, Form &Form)
{
    o << "Name: " << Form.getName() << ", Signed: " << Form.getSigned() << ", Grade to sign: "
        << Form.getGradeToSign() << ", Grade to execute: " << Form.getGradeToExecute();
    return (o);
}

// Accessors
const std::string   &Form::getName() const
{
    return (_name);
}

void    Form::setSigned(bool b)
{
    this->_signed = b;
}

bool    Form::getSigned() const
{
    return (_signed);
}

unsigned int  Form::getGradeToSign() const
{
    return (_gradeToSign);
}

unsigned int  Form::getGradeToExecute() const
{
    return (_gradeToExecute);
}

// Member Functions
void    Form::beSigned(const Bureaucrat &Bureaucrat)
{
    if (Bureaucrat.getGrade() > getGradeToSign())
        throw Form::GradeTooLowException();
    setSigned(true);
}
