#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    cout << "PB Constructor Called" << endl;
    this->position = 0;
    this->size = 0;

    return ;
}

PhoneBook::~PhoneBook()
{
    cout << "PB Destructor Called" << endl;
    
    return ;
}

void PhoneBook::addContact(Contact Contact)
{
    if (this->position == 8)
        this->position = 0;
    
    if (this->size != 8)
        this->size++;
    
    Contact.id = this->position;
    this->Book[this->position] = Contact;
    this->position++;

    return ;
}

void PhoneBook::printBook(void)
{
    int i;

    i = -1;
    cout << " __________ __________ __________ __________ " << endl;
    cout << "|Id        |First Name|Last Name |Phone Num.|" << endl;
    while (++i < this->size)
    {

        cout << "|----------|----------|----------|----------|" << endl;
        cout << "|" << this->Book[i].id << "         |";
        put_substr(this->Book[i].firstName);
        cout << "|";
        put_substr(this->Book[i].lastName);
        cout << "|";
        put_substr(this->Book[i].phoneNumber);
        cout << "|";
        cout << endl << "|----------|----------|----------|----------|" << endl;
    }
    cout << endl;
    cout << endl;
}

void    PhoneBook::printContact(int id)
{
    printf("size = %d\n", this->size);
    if (id - 1 > this->size)
    {
        cerr << id << " not find" << endl;
        return ;
    }
    cout << "First Name: " << this->Book[id].firstName << endl;
    cout << "Last Name: " << this->Book[id].lastName << endl;
    cout << "Phone Number: " << this->Book[id].phoneNumber << endl;
    cout << "Darkest Secret: " << this->Book[id].darkestSecret << endl << endl;
}
