/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theodeville <theodeville@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:53:36 by theodeville       #+#    #+#             */
/*   Updated: 2022/11/30 15:30:10 by theodeville      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
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

    Form(void);
    Form(const std::string &name, unsigned int gradeToSign, unsigned int gradeToExecute);
    Form(const Form &Form);
    ~Form(void);


    // Getters
    const std::string   &getName() const;
    bool                getSigned() const;
    unsigned int        getGradeToSign() const;
    unsigned int        getGradeToExecute() const;
    
    // Setter
    void                setSigned(bool b);

    // Member Functions
    void        beSigned(const Bureaucrat &Bureaucrat);

private:

    Form  &operator=(const Form &Form);
    
    const std::string   _name;
    bool                _signed;
    const unsigned int  _gradeToSign;
    const unsigned int  _gradeToExecute;

};

std::ostream &operator<<(std::ostream &o, Form &Form);

#endif
