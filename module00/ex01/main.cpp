#include "main.hpp"

void	put_substr(string str)
{
	string  new_str = "          ";

	if (str.length() < 10)
		cout << str << new_str.substr(str.length());
	else
		cout << str.substr(0, 9) << ".";
}

static int	check_id(string id)
{
	int iid;

	if (id.find_first_not_of("012345678") != string::npos)
		return (-1);
	try
	{
		iid = stoi(id);
		if (iid >= 0 && iid <= 8)
			return (iid);
	}
	catch(const std::exception& e)
	{
	   ;
	}
	return (-1);
}

static void	search_contact(PhoneBook *PhoneBook)
{
	string  id;

	PhoneBook->printBook();
	cout << "Please choose an id contact to print: ";
	getline(cin, id);
	while (check_id(id) == -1)
	{
		cerr << "Please enter valid Id: ";
		getline(cin, id);
	}
	PhoneBook->printContact(check_id(id));
}

static void add_contact(PhoneBook *PhoneBook)
{
	int     i;
	Contact Contact;
	string  userParams[4];
	string  options[4] = {
		"First Name",
		"Last Name",
		"Phone Number",
		"Darkest Secret"
	};

	i = -1;
	cout << endl;
	while (++i < 4)
	{
		cout << options[i] << ": ";
		getline(cin, userParams[i]);
		while ((userParams[i].find_first_not_of(32) == string::npos)
			|| (userParams[i].find_first_not_of(9) == string::npos))
		{
			cerr << "The field cannot be empty" << endl << endl;
			cout << options[i] << ": ";
			getline(cin, userParams[i]);
		}
	}
	Contact.createContact(userParams);
	PhoneBook->addContact(Contact);
	cout << endl;
}

static void phone_book_menu(void)
{
	cout << endl;
	cout << ": ";
}

int main(void)
{
	PhoneBook   PhoneBook;
	string      str;

	while (str.compare("EXIT"))
	{
		phone_book_menu();
		getline(cin, str);
		if (!str.compare("ADD"))
			add_contact(&PhoneBook);
		else if (!str.compare("SEARCH"))
			search_contact(&PhoneBook);
	}
	return (0);
}
