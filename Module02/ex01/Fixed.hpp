/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <tdeville@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:37:26 by tdeville          #+#    #+#             */
/*   Updated: 2022/12/06 16:28:44 by tdeville         ###   ########lyon.fr   */
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
