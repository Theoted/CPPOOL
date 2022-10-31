#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

using namespace std;

class Contact
{

public:

    string  firstName;
    string  lastName;
    string  phoneNumber;
    string  darkestSecret;
    int     id;

    Contact(void);
    ~Contact(void);

    void createContact(string options[4]);
};

#endif
