/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <tdeville@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 11:13:30 by tdeville          #+#    #+#             */
/*   Updated: 2023/01/05 13:10:51 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) :	_name("NoName"),
								_grade(150)
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name) : _name(name)
{
	std::cout << "Bureaucrat " << name << " name constructor called" << std::endl;
	_grade = 150;
}

Bureaucrat::Bureaucrat(const std::string &name, unsigned int grade) : _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << "Bureaucrat " << name << " name and grade constructor called" << std::endl;
	_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &Bureaucrat) :	_name(Bureaucrat._name),
													    _grade(Bureaucrat._grade)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat " << _name << " destructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &Bureaucrat) 
{
	std::cerr << "Bureaucrat equal operator doesn't work because of const attributes" << std::endl;
	(void)Bureaucrat;
	return (*this);
}

// _name accessor
const std::string	&Bureaucrat::getName() const
{
	return (_name);
}

// _grade accessors
void				Bureaucrat::setGrade(unsigned int grade)
{
	_grade = grade;
}

unsigned int		Bureaucrat::getGrade() const
{
	return (_grade);
}

// Member function
void	Bureaucrat::upgrade()
{
	_grade--;
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::demote()
{
	_grade++;
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void	Bureaucrat::signForm(Form &Form) const
{
	try
	{
		Form.beSigned(*this);
		std::cout << getName() << " signed " << Form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << getName() << " couldn't sign " << Form.getName()
			<< " because " << e.what() << std::endl;
	}
}

std::ostream &operator<<(std::ostream &o, const Bureaucrat &Bureaucrat)
{
    o << Bureaucrat.getName() << ", Buraucrat grade " << Bureaucrat.getGrade() << std::endl;
    return (o);
}