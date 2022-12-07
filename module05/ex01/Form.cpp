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
    std::cout << "Form Overloaded operator = called" << std::endl;
    return (*this);
}

std::ostream &operator<<(std::ostream &o, Form &Form)
{
    o << Form.getName() << " " << Form.getSigned() << " "
        << Form.getGradeToSign() << " " << Form.getGradeToExecute() << " ";
    return (o);
}

// Accessors
const std::string   &Form::getName() const
{
    return (this->_name);
}

void    Form::setSigned(bool b)
{
    this->_signed = b;
}

bool    Form::getSigned() const
{
    return (this->_signed);
}

const unsigned int  Form::getGradeToSign() const
{
    return (this->_gradeToSign);
}

const unsigned int  Form::getGradeToExecute() const
{
    return (this->_gradeToExecute);
}

// Member Functions
void    Form::beSigned(const Bureaucrat &Bureaucrat)
{
    if (Bureaucrat.getGrade() )
}
