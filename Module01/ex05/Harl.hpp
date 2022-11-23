/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <tdeville@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:08:50 by tdeville          #+#    #+#             */
/*   Updated: 2022/11/07 13:45:57 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>
# include <iostream>


class Harl
{

public:
    
    Harl( void );
    ~Harl( void );

    void    complain( std::string level );
    
private:

    typedef struct  s_complaints
    {
        std::string     msg;
        void (Harl::    *action)();  
            
    } t_complaints;
    
    void            debug( void );
    void            info( void );
    void            warning( void );
    void            error( void );

    t_complaints    complaints[4];
    
};

#endif
