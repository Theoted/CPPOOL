/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <tdeville@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 11:52:25 by tdeville          #+#    #+#             */
/*   Updated: 2023/01/10 12:23:40 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <sstream>
# include <limits>
# include <cctype>
# include <cmath>
# include <ctgmath>

enum e_types
{
	DOUBLE,
	FLOAT,
	INT,
	CHAR,
	MY_NAN,
	MY_NANF,
	INF,
	INFF,
	N_INF,
	N_INFF
};

class Converter
{

public:

	class BadFormatException : public std::exception
    {
        public:
            virtual const char *what() const throw(){return ("Bad Format Argument");}
    };
	
	Converter();
	Converter(const std::string &litteral);
	Converter(const Converter &Converter);
	~Converter();

	Converter   &operator=(const Converter &Converter);

	// SETTER
	void        setType(const std::string &litteral);
	void        setValue(const std::string &litteral);

	// GETTER
	unsigned int    getType() const;

	// PUBLIC MEMBER FUNCTIONS
	void            printConversion() const;

private:

	double			_value;			
	unsigned int	_type;

	// PRIVATE MEMBER FUNCTIONS
	void	printInt() const;
	void	printChar() const;
	void	printDouble() const;
	void	printFloat() const;

};

int     is_pseudo_litteral(const std::string &litteral);
bool    is_char(const std::string &litteral);
int		is_number(const std::string &litteral);
bool	is_float(const std::string &litteral);
bool	check_points(const std::string &litteral);
int		count_points(const std::string &litteral);

#endif