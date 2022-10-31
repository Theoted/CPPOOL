#include "Contact.hpp"

Contact::Contact()
{
    cout << "Contact Constructor called" << endl;
    this->id = 0;
    
    return ;
}

Contact::~Contact()
{
    cout << "Contact Destructor called" << endl;

    return ;
}

void Contact::createContact(string options[4])
{
    this->firstName.assign(options[0]);
    this->lastName.assign(options[1]);
    this->phoneNumber.assign(options[2]);
    this->darkestSecret.assign(options[3]);
}
