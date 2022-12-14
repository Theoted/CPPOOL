/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <tdeville@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 11:13:27 by tdeville          #+#    #+#             */
/*   Updated: 2022/12/07 11:18:21 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_CPP
# define BUREAUCRAT_CPP

# include <string>
# include <iostream>

class Bureaucrat
{

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

public:

    Bureaucrat();
    Bureaucrat(const std::string &name);
    Bureaucrat(const std::string &name, unsigned int grade);
    Bureaucrat(const Bureaucrat &Bureaucrat);
    ~Bureaucrat();

    Bureaucrat &operator=(const Bureaucrat &Bureaucrat);

    // _name accessor
    const std::string   &getName() const;
    
    // _grade accessors
    void                setGrade(unsigned int grade);
    unsigned int        getGrade() const;

    // Member functions
    void                upgrade();
    void                demote();

private:
    
    const std::string   _name;
    unsigned int        _grade;

};

std::ostream    &operator<<(std::ostream &o, const Bureaucrat &Bureaucrat);

#endif