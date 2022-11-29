/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theodeville <theodeville@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:37:26 by tdeville          #+#    #+#             */
/*   Updated: 2022/11/29 13:27:10 by theodeville      ###   ########.fr       */
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
    
    Fixed   &operator=(const Fixed &Fixed);

    // Comparaison operators 
    bool    operator<(const Fixed &F2);
    bool    operator>(const Fixed &F2);
    bool    operator<=(const Fixed &F2);
    bool    operator>=(const Fixed &F2);
    bool    operator==(const Fixed &F2);
    bool    operator!=(const Fixed &F2);

    // Arithmetic operators
    Fixed   operator+(const Fixed &F2);
    Fixed   operator-(const Fixed &F2);
    Fixed   operator*(const Fixed &F2);
    Fixed   operator/(const Fixed &F2);
    
    // Arithmetic operators
        // Prefix
    Fixed   &operator++(void);
    Fixed   &operator--(void);
        // Postfix
    Fixed   operator++(int n);
    Fixed   operator--(int n);

    static const Fixed   &min(Fixed &F1, Fixed &F2);
    static const Fixed   &min(const Fixed &F1, const Fixed &F2);

    static const Fixed   &max(Fixed &F1, Fixed &F2);
    static const Fixed   &max(const Fixed &F1, const Fixed &F2);

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
