/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fn.hpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <tdeville@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 11:31:02 by tdeville          #+#    #+#             */
/*   Updated: 2023/01/11 11:47:07 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FN_HPP
# define FN_HPP

template	<typename T>
void	swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template	<typename T>
T	&min(T &a, T &b)
{
	return (a < b ? a : b);
}

template	<typename T>
T	&max(T &a, T &b)
{
	return (a > b ? a : b);
}

#endif