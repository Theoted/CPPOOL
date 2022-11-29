/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theodeville <theodeville@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:37:26 by tdeville          #+#    #+#             */
/*   Updated: 2022/11/29 10:21:09 by theodeville      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{

public:

    Fixed(void);
    Fixed(const Fixed &Fixed);
    ~Fixed(void);
    
    Fixed &operator=(const Fixed &Fixed);

    int     getRawBits(void) const;
    void    setRawBits(int const raw);

private:

    int                 _n;
    static const int    _bits = 8;

};

#endif