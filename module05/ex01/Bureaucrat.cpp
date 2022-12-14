/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <tdeville@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 11:13:30 by tdeville          #+#    #+#             */
/*   Updated: 2022/12/07 11:20:50 by tdeville         ###   ########lyon.fr   */
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
	this->_grade = 150;
}

Bureaucrat::Bureaucrat(const std::string &name, unsigned int grade) : _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << "Bureaucrat " << name << " name and grade constructor called" << std::endl;
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &Bureaucrat) :	_name(Bureaucrat._name),
													    _grade(Bureaucrat._grade)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat " << this->_name << " destructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &Bureaucrat) 
{
	std::cout << "Bureaucrat equal operator called" << std::endl;
	this->_grade = Bureaucrat.getGrade();
	
	return (*this);
}

// _name accessor
const std::string	&Bureaucrat::getName() const
{
	return (this->_name);
}

// _grade accessors
void				Bureaucrat::setGrade(unsigned int grade)
{
	this->_grade = grade;
}

unsigned int		Bureaucrat::getGrade() const
{
	return (this->_grade);
}

// Member function
void	Bureaucrat::upgrade()
{
	this->_grade--;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::demote()
{
	this->_grade++;
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &o, const Bureaucrat &Bureaucrat)
{
    o << Bureaucrat.getName() << ", Buraucrat grade " << Bureaucrat.getGrade() << std::endl;
    return (o);
}