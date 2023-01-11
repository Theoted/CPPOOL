/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <tdeville@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 11:52:23 by tdeville          #+#    #+#             */
/*   Updated: 2023/01/10 12:23:07 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

Converter::Converter() {}

Converter::Converter(const Converter &Converter)
{
	*this = Converter;
}

Converter::Converter(const std::string &litteral)
{
	setType(litteral);
	setValue(litteral);
}

Converter::~Converter() {}

Converter &Converter::operator=(const Converter &Converter)
{
	_type = Converter._type;
	return (*this);
}

// SETTER
void	Converter::setType(const std::string &litteral)
{
	// Check if pseudo litteral
	switch (is_pseudo_litteral(litteral))
	{
	case 1:
		if (is_float(litteral))
			_type = MY_NANF;
		else
			_type = MY_NAN;
		return ;
	
	case 2:
		if (is_float(litteral))
			_type = INFF;
		else
			_type = INF;
		return ;
	
	case 3:
		if (is_float(litteral))
			_type = N_INFF;
		else
			_type = N_INF;
		return ;
	
	default:
		break ;
	}
	

	// Check if number
	if (!(count_points(litteral) > 1))
	{
		switch (is_number(litteral))
		{
		case DOUBLE:
			_type = DOUBLE;
			return ;
		
		case FLOAT:
			_type = FLOAT;
			return ;
		
		case INT:
			_type = INT;
			return ;
		
		default:
			break ;
		}
	}
	
	// Check if Char
	if (is_char(litteral))
	{
		_type = CHAR;
		return ;
	}
	throw BadFormatException();
}

void	Converter::setValue(const std::string &litteral)
{
	std::stringstream	ss;

	ss << litteral;
	if (_type == FLOAT)
	{
		std::string	tmp = litteral;
		ss.str("");
		tmp.resize(tmp.length() - 1);
		ss << tmp;
		ss >> _value;
	}
	else if (_type == CHAR)
	{
		char	tmp;
		ss >> tmp;
		_value = tmp;
	}
	else
		ss >> _value;
}

// GETTER
unsigned int    Converter::getType() const {return (_type);}

// PUBLIC MEMEBER FUNCTIONS
void    Converter::printConversion() const
{
	printInt();
	printChar();
	printDouble();
	printFloat();
}

// PRIVATE MEMBER FUNCTIONS
void	Converter::printInt() const
{
	if (_value > std::numeric_limits<int>::max() ||
		_value < std::numeric_limits<int>::min() ||
		_type > 3)
	{
		std::cout << "int: impossible\n";
		return ;
	}

	if (_type == FLOAT || _type == DOUBLE || _type == CHAR)
		std::cout << "int: " << static_cast<int>(_value) << std::endl;
	else
		std::cout << "int: " << _value << std::endl;
}

void	Converter::printChar() const
{
	if (isprint(_value))
		std::cout << "char: '" << static_cast<char>(_value) << "'\n";
	else
		std::cout << "char: Non displayable\n";
}

void	Converter::printDouble() const
{
	if (_type == FLOAT || _type == INT || _type == CHAR)
	{
		if (_value == (int)_value)
			std::cout << "double: " << (_value) << ".0" << std::endl;
		else
			std::cout << "double: " << (_value) << std::endl;
	}
	else if (_type == INFF)
		std::cout << "double: inf\n";
	else if (_type == N_INFF)
		std::cout << "double: -inf\n";
	else if (_type == MY_NANF)
		std::cout << "double: nan\n";
	else
	{
		if (_value == (int)_value)
			std::cout << "double: " << _value << ".0" << std::endl;
		else
			std::cout << "double: " << _value << std::endl;
	}
}

void	Converter::printFloat() const
{
	if (_type == DOUBLE || _type == INT || _type == CHAR)
	{
		if (_value == (int)_value)
			std::cout << "float: " << _value << ".0f" << std::endl;
		else
			std::cout << "float: " << _value << "f" << std::endl;
	}
	else if (_type == INF)
		std::cout << "float: inff\n";
	else if (_type == N_INF)
		std::cout << "float: -inff\n";
	else if (_type == MY_NAN)
		std::cout << "float: nanf\n";
	else if (_type == INFF)
		std::cout << "float: inff\n";
	else if (_type == N_INFF)
		std::cout << "float: -inff\n";
	else if (_type == MY_NANF)
		std::cout << "float: nanf\n";
	else
	{
		if (_value == (int)_value)
			std::cout << "float: " << _value << ".0f" << std::endl;
		else
			std::cout << "float: " << _value << "f" << std::endl;
	}
}

// NO MEMBER FUNCTIONS
int is_pseudo_litteral(const std::string &litteral)
{
	if (litteral == "nanf" || litteral == "nan")
		return (1);
	else if (litteral == "inff" || litteral == "inf" || litteral == "+inff" || litteral == "+inf")
		return (2);
	else if (litteral == "-inff" || litteral == "-inf")
		return (3);
	return (0);
}

bool    is_char(const std::string &litteral)
{
	if (litteral.length() == 1)
		return (true);
	return (false);
}

bool	check_points(const std::string &litteral)
{
	if (count_points(litteral) > 1)
		return (false);
	return (true);
}

int	count_points(const std::string &litteral)
{
	int	points = 0;
	
	for (size_t i = 0; i < litteral.length(); i++)
	{
		if (litteral.at(i) == 46)
			points++;
	}
	return (points);
}

int	is_number(const std::string &litteral)
{
	int points = 0;
	int	f = 0;
	int	minus = 0;

	for (size_t i = 0; i < litteral.length(); i++)
	{
		if (!isdigit(litteral.at(i)))
		{
			if (litteral.at(i) == 46)
				points++;
			else if (litteral.at(i) == 102)
				f++;
			else if (litteral.at(i) == 45)
				minus++;
			else
				return (-1);
			if (minus > 1)
				return (-1);
		}
	}
	
	if (points == 1 && f == 0)
		return (DOUBLE);
	if (points == 1 && f == 1)
		return (FLOAT);
	return (INT);
}

bool	is_float(const std::string &litteral)
{
	if (is_pseudo_litteral(litteral) == 2 || is_pseudo_litteral(litteral) == 3)
	{
		if (litteral.at(litteral.length() - 1) == 102 && litteral.at(litteral.length() - 2) == 102)
			return (true);
	}
	else
		if (litteral.at(litteral.length() - 1) == 102)
			return (true);
	return (false);
}
