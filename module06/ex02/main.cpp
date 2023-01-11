/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <tdeville@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 10:02:19 by tdeville          #+#    #+#             */
/*   Updated: 2023/01/11 11:18:37 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ABC.hpp"
#include <cstdlib>
#include <ctime>

Base *generate()
{
	std::srand(std::time(nullptr));

	int random = rand() % 3;

	Base *base = nullptr;

	if (random == 0)
		base = new A;
	else if (random == 1)
		base = new B;
	else if (random == 2)
		base = new C;
	return (base);
}

void identify(Base *p)
{
	A *a = dynamic_cast<A *>(p);
	B *b = dynamic_cast<B *>(p);
	C *c = dynamic_cast<C *>(p);

	if (a)
		std::cout << "Type is A\n";
	else if (b)
		std::cout << "Type is B\n";
	else if (c)
		std::cout << "Type is C\n";
}

void identify(Base &p)
{
	try
	{
		A &a = dynamic_cast<A &>(p);
		std::cout << "Type is A\n";
		(void)a;
	}
	catch (const std::exception &e)
	{
	}

	try
	{
		B &b = dynamic_cast<B &>(p);
		std::cout << "Type is B\n";
		(void)b;
	}
	catch (const std::exception &e)
	{
	}

	try
	{
		C &c = dynamic_cast<C &>(p);
		std::cout << "Type is C\n";
		(void)c;
	}
	catch (const std::exception &e)
	{
	}
}

int main()
{
	Base *p = generate();
	Base *p1 = new A;

	identify(p);
	identify(p1);

	std::cout << "\n\n";

	Base *tmp = generate();
	Base &r = *tmp;

	identify(r);

	return (0);
}
