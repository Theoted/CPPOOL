/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theodeville <theodeville@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:53:36 by theodeville       #+#    #+#             */
/*   Updated: 2022/11/30 15:30:10 by theodeville      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
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

    class FormNotSignedException : public std::exception
    {
        public:
            virtual const char *what() const throw(){return ("Form Not Signed\n");}
    };

    AForm(void);
    AForm(const std::string &name, unsigned int gradeToSign, unsigned int gradeToExecute);
    AForm(const AForm &AForm);
    virtual ~AForm(void);


    // Setter
    void                setSigned(bool b);

    // Getters
    bool                getSigned() const;
    unsigned int        getGradeToSign() const;
    unsigned int        getGradeToExecute() const;
    const std::string   &getName() const;

    // Member Functions
    void                beSigned(const Bureaucrat &Bureaucrat);
    virtual void        execute(Bureaucrat const &executor) const = 0;

private:

    AForm  &operator=(const AForm &AForm);

protected:

    const std::string   _name;
    bool                _signed;
    const unsigned int  _gradeToSign;
    const unsigned int  _gradeToExecute;

};

std::ostream    &operator<<(std::ostream &o, AForm &AForm);

#endif
