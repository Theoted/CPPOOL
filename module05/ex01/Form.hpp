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

class Form
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

    Form(void);
    Form(const Form &Form);
    ~Form(void);

    Form  &operator=(const Form &Form);

    // Accessors
    const std::string   &getName() const;
    void                setSigned(bool b);
    bool                getSigned() const;
    const unsigned int  getGradeToSign() const;
    const unsigned int  getGradeToExecute() const;

    // Member Functions
    void        beSigned(const Bureaucrat &Bureaucrat);    

private:

    const std::string   _name;
    bool                _signed;
    const unsigned int  _gradeToSign;
    const unsigned int  _gradeToExecute;

};

std::ostream &operator<<(std::ostream &o, Form &Form);

#endif
