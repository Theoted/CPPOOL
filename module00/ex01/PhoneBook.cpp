#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->_position = 0;
	this->_size = 0;

	return ;
}

PhoneBook::~PhoneBook()
{
	return ;
}

void	PhoneBook::addContact(Contact Contact)
{
	if (this->_position == 8)
		this->_position = 0;
	
	if (this->_size != 8)
		this->_size++;
	
	Contact.id = this->_position;
	this->_Book[this->_position] = Contact;
	this->_position++;

	return ;
}

void	PhoneBook::printBook(void)
{
	int i;

	i = -1;
	cout << " ---------- ---------- ---------- ---------- " << endl;
	cout << "|Id        |First Name|Last Name |Phone Num.|" << endl;
	cout << " ---------- ---------- ---------- ---------- " << endl;
	while (++i < this->_size)
	{

		cout << " ---------- ---------- ---------- ---------- " << endl;
		cout << "|" << this->_Book[i].id << "         |";
		put_substr(this->_Book[i].firstName);
		cout << "|";
		put_substr(this->_Book[i].lastName);
		cout << "|";
		put_substr(this->_Book[i].phoneNumber);
		cout << "|";
		cout << endl << " ---------- ---------- ---------- ---------- " << endl;
	}
	cout << endl;
	cout << endl;
}

void    PhoneBook::printContact(int id)
{
	if (id > this->_size - 1)
	{
		cerr << id << " not found" << endl;
		return ;
	}
	cout << endl;
	cout << "First Name: " << this->_Book[id].firstName << endl;
	cout << "Last Name: " << this->_Book[id].lastName << endl;
	cout << "Phone Number: " << this->_Book[id].phoneNumber << endl;
	cout << "Darkest Secret: " << this->_Book[id].darkestSecret << endl << endl;
}
