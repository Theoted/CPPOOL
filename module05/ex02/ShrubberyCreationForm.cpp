/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <tdeville@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 14:19:01 by tdeville          #+#    #+#             */
/*   Updated: 2023/01/05 13:58:15 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() :
    AForm("", 145, 137), _target("")
{
    std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) :
    AForm("", 145, 137), _target(target)
{
    std::cout << "ShrubberyCreationForm assignation target constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string name, const std::string &target) :
    AForm(name, 145, 137), _target(target)
{
    std::cout << "ShrubberyCreationForm assignation name and target constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &ShrubberyCreationForm) :
    AForm(ShrubberyCreationForm._name, 145, 137), _target(ShrubberyCreationForm._target)
{
    std::cout << "ShrubberyCreationForm Copy constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm  &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &ShrubberyCreationForm)
{
    std::cout << "ShrubberyCreationForm Overloaded operator does't work" << std::endl;
    (void) ShrubberyCreationForm;
    return (*this);
}

void    ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (_signed == 0)
        throw ShrubberyCreationForm::FormNotSignedException();
    if (executor.getGrade() > _gradeToExecute)
        throw ShrubberyCreationForm::GradeTooLowException();
    createShrubbery(_target);
}

void    ShrubberyCreationForm::createShrubbery(const std::string &target) const
{
    // Open infile and security check
    std::ifstream   asciiShrubbery(".shrubbery_ascii.txt");
    if (!asciiShrubbery.is_open())
	{
		std::cerr << "Infile error" << std::endl;
		return ;
	}

    // Open and create outfile and security check
    std::ofstream   targetFile(std::strcat((char *)target.c_str(), "_shrubbery"));
    if (!targetFile.is_open()) 
	{
		std::cerr << "Outfile error" << std::endl;
		return ;
	}
    
    std::string line;

    // Write infile into outfile
    getline(asciiShrubbery, line);
    while (1)
    {
        if (asciiShrubbery.eof())
			break ;
        targetFile << line << std::endl;
        getline(asciiShrubbery, line);
    }
}
