/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theodeville <theodeville@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 10:16:09 by theodeville       #+#    #+#             */
/*   Updated: 2023/01/12 14:33:21 by theodeville      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <utility>
#include <cstdlib>
#include <ctime>

class Span
{

public:

	class SpanIsFull : public std::exception {
		public:
			virtual const char *what() const throw(){return ("Span Is Full");}
	};
	
	class NoDistancesFound : public std::exception {
		public:
			virtual const char *what() const throw(){return ("No Distances Found");}
	};

	Span();
	Span(unsigned int N);
	Span(const Span &Span);
	~Span();

	Span	&operator=(const Span &Span);
	
	void	addNumber(int N);
	void	addRandomNumbers();
	int		shortestSpan() const;
	int		longestSpan() const;

	// Utils
	void	printSpan() const;

private:

	std::vector<int>	_span;
	unsigned int		_maxSize;
	
};