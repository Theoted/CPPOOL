#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include "Contact.hpp"
# include "main.hpp"

class PhoneBook
{

public:


	PhoneBook(void);
	~PhoneBook(void);

	void	addContact(Contact Contact);
	void	printBook(void);
	void	printContact(int id);

private:

	Contact	_Book[8];
	int		_position;
	int		_size;

};

#endif
