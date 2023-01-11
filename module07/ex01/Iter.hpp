/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <tdeville@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 11:51:30 by tdeville          #+#    #+#             */
/*   Updated: 2023/01/11 14:26:02 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename T>
void    iter(T *tab, int size, void (*fn)(T &))
{
    if (size < 0)
    {
        std::cerr << "Negative size\n";
        return ;
    }
    for (int i = 0; i < size; i++)
    {
        fn(tab[i]);
    }
}

#endif