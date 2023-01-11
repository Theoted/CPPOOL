/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <tdeville@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 12:44:27 by tdeville          #+#    #+#             */
/*   Updated: 2023/01/11 09:48:21 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <cstdint>
#include <iostream>
#include "Data.hpp"

uintptr_t	serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*		deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int	main()
{
	Data	data;

	data.f_data = 42.24f;
	data.i_data = 42;

	uintptr_t	t = serialize(&data);
	
	Data	*data2 = deserialize(t);
	
	std::cout << "data addr: " << &data << "\ndata2 addr: "
		<< data2 << "\n" << "data2 int value: " << data2->i_data << "\ndata2 float value: "
		<< data2->f_data << std::endl;

	return (0);
}
