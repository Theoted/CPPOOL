#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include "Contact.hpp"
# include "main.hpp"

using namespace std;

class PhoneBook
{

public:

    Contact Book[8];
    int     position;
    int     size;

    PhoneBook(void);
    ~PhoneBook(void);

    void    addContact(Contact Contact);
    void    printBook(void);
    void    printContact(int id);
};

#endif
