/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theodeville <theodeville@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 10:18:26 by theodeville       #+#    #+#             */
/*   Updated: 2023/01/12 14:33:37 by theodeville      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _maxSize(0) {}

Span::Span(unsigned int N) : _maxSize(N) {}

Span::Span(const Span &Span) { *this = Span; }

Span::~Span() {}

Span	&Span::operator=(const Span &Span)
{
	_span = Span._span;
	_maxSize = Span._maxSize;
	return (*this);
}

// Member functions
void	Span::addNumber(int N)
{
	if (_span.size() > _maxSize - 1)
		throw SpanIsFull();
	_span.push_back(N);
}

int	Span::shortestSpan() const
{	
	if (_span.empty())
		throw NoDistancesFound();

	std::vector<int> tmp = _span;
	std::sort(tmp.begin(), tmp.end());
	int closest_distance = INT_MAX;
	std::pair<int, int>	closest_pair;
	for (std::vector<int>::iterator it = tmp.begin(); (it + 1) != tmp.end(); ++it)
	{
		int	diff = *(it + 1) - *it;
		if (diff < closest_distance)
		{
			closest_distance = diff;
			closest_pair = std::make_pair(*it, *(it + 1));
		}
	}
	
	int i = 0;
	while ((closest_pair.first + i) < closest_pair.second)
		i++;
	if (!i)
		throw NoDistancesFound();

	return (i);
}

int	Span::longestSpan() const
{
	if (_span.empty())
		throw NoDistancesFound();

	int	min = *std::min_element(_span.begin(), _span.end());
	int	max = *std::max_element(_span.begin(), _span.end());
	
	int i = 0;
	while ((min + i) < max)
		i++;
	if (!i)
		throw NoDistancesFound();
	
	return (i);
}

void	Span::addRandomNumbers()
{
	std::srand(std::time(0));
	for (int i = 0; i < _maxSize; i++)
	{
		std::srand(std::rand());
		addNumber(1 + (rand() % 1533));
	}
}

// Utils
void	Span::printSpan() const
{
	for (size_t i = 0; i < _maxSize; i++)
	{
		std::cout << _span[i] << " ";
	}
	std::cout << "\n";
}
