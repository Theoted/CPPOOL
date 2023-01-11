/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <tdeville@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:35:45 by tdeville          #+#    #+#             */
/*   Updated: 2023/01/11 14:42:03 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template<typename T>
class Array
{

public:
	Array();
	Array(unsigned int n);
	Array(const Array &Array);

	Array	&operator=(const Array &Array);

	// Member function
	int	size() const;
	
	// Attributes
	T	*elems;

private:

};

#endif