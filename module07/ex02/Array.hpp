/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theodeville <theodeville@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:35:45 by tdeville          #+#    #+#             */
/*   Updated: 2023/01/11 18:41:15 by theodeville      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<typename T>
class Array
{

public:

	class UnvalidId : public std::exception
    {
        public:
            virtual const char *what() const throw(){return ("Unvalid Id");}
    };

	Array();
	Array(unsigned int n);
	Array(const Array &Array);
	~Array();

	Array	&operator=(const Array &Array);
	T		&operator[](const int i);

	// Member function
	int	size() const;
	

private:
	T	*_array;
	int	_size;

};

#endif