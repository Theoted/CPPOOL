#include "Contact.hpp"

Contact::Contact()
{
	this->id = 0;

	return ;
}

Contact::~Contact()
{
	return ;
}

void	Contact::createContact(string options[4])
{
	this->firstName.assign(options[0]);
	this->lastName.assign(options[1]);
	this->phoneNumber.assign(options[2]);
	this->darkestSecret.assign(options[3]);
}
