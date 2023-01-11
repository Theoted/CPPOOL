/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theodeville <theodeville@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:53:36 by theodeville       #+#    #+#             */
/*   Updated: 2022/11/30 15:30:10 by theodeville      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"

# include <cstdlib>

class RobotomyRequestForm : public AForm
{

public:

    RobotomyRequestForm();
    RobotomyRequestForm(const std::string &name, const std::string &target);
    RobotomyRequestForm(const std::string &target);
    RobotomyRequestForm(const RobotomyRequestForm &RobotomyRequestForm);
    ~RobotomyRequestForm();

    // Memer function
    void    robotomyRequest() const;
    void    execute(Bureaucrat const &executor) const;

private:

    RobotomyRequestForm  &operator=(const RobotomyRequestForm &RobotomyRequestForm);

    const std::string   _target;

};

#endif
