/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdeville <tdeville@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 16:59:34 by theodeville       #+#    #+#             */
/*   Updated: 2022/11/07 13:03:00 by tdeville         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

static inline int	check_infile(const std::ifstream &infile)
{
	if (!infile.is_open())
	{
		std::cerr << "Infile error" << std::endl;
		return (1);
	}
	return (0);
}

static inline int	check_outfile(const std::ofstream &outfile)
{
	if (!outfile.is_open())
	{
		std::cerr << "Outfile error" << std::endl;
		return (1);
	}
	return (0);
}

static inline void	my_replace
	(std::string &origin, size_t pos, const std::string &s1, const std::string &s2)
{
	origin.erase(pos, s1.length());
	origin.insert(pos, s2);
}

static inline bool replace(std::string &str, const std::string &s1, const std::string &s2)
{
    size_t start_pos = str.find(s1);
	if (start_pos == std::string::npos)
        return (false);
	my_replace(str, start_pos, s1, s2);
	
	start_pos = str.find(s1, start_pos);
	if (start_pos == std::string::npos)	
        return (false);
	
	while (start_pos != std::string::npos)
	{
		my_replace(str, start_pos, s1, s2);
		start_pos = str.find(s1, start_pos);
	}
    return (true);
}

static void	my_sed(std::ifstream &infile, std::ofstream &outfile, const std::string &s1, const std::string &s2)
{
	std::string     line;

	while (getline(infile, line))
	{
		replace(line, s1, s2);
		outfile << line << std::endl;
	}
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Arguments Error" << std::endl;
		return (1);
	}

	const std::string		s1(av[2]);
	const std::string		s2(av[3]);

	std::ifstream   infile(av[1]);
	if (check_infile(infile))
		return (1);
	
	std::ofstream   outfile(strcat(av[1], ".replace"));
	if (check_outfile(outfile))
		return (1);

	my_sed(infile, outfile, s1, s2);
	return (0);
}
