/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theodeville <theodeville@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:37:26 by tdeville          #+#    #+#             */
/*   Updated: 2022/11/29 11:12:48 by theodeville      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{

public:

    Fixed(void);
    Fixed(const Fixed &Fixed);
    Fixed(const int n);
    Fixed(const float n);
    ~Fixed(void);
    
    Fixed &operator=(const Fixed &Fixed);

    float   toFloat(void) const;
    int     toInt(void) const;

    int     getRawBits(void) const;
    void    setRawBits(int const raw);

private:

    int                 _n;
    static const int    _bits = 8;

};

std::ostream    &operator<<(std::ostream &o, Fixed const &F);

#endif
