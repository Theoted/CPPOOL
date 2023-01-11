/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <tdeville@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 11:13:27 by tdeville          #+#    #+#             */
/*   Updated: 2023/01/05 13:10:22 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_CPP
# define BUREAUCRAT_CPP

# include <string>
# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat
{

public:

    class GradeTooHighException : public std::exception
    {
        public:
            virtual const char *what() const throw(){return ("Grade Too High\n");}
    };
    
    class GradeTooLowException : public std::exception
    {
        public:
            virtual const char *what() const throw(){return ("Grade Too Low\n");}
    };

    Bureaucrat();
    Bureaucrat(const std::string &name);
    Bureaucrat(const std::string &name, unsigned int grade);
    Bureaucrat(const Bureaucrat &Bureaucrat);
    ~Bureaucrat();


    // _name accessor
    const std::string   &getName() const;
    
    // _grade accessors
    void                setGrade(unsigned int grade);
    unsigned int        getGrade() const;

    // Member functions
    void                upgrade();
    void                demote();
    void                signForm(Form &Form) const;

private:
    
    Bureaucrat &operator=(const Bureaucrat &Bureaucrat);
    
    const std::string   _name;
    unsigned int        _grade;

};

std::ostream    &operator<<(std::ostream &o, const Bureaucrat &Bureaucrat);

#endif