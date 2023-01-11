/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <tdeville@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:37:26 by tdeville          #+#    #+#             */
/*   Updated: 2022/12/12 13:15:06 by tdeville         ###   ########lyon.fr   */
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

    int                 _rawBits;
    static const int    _bits = 8;

};

#endif