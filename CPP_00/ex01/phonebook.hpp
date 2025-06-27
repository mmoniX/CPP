#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <iomanip>
# include <string>
# include <limits>
# include "Contact.hpp"

class PhoneBook
{
    private:
        Contact contacts[8];
        int index;
        int count;
    public:
        PhoneBook() : index(0), count(0) {}
        void add_Contact(Contact entry);
        bool display_AllContacts(void);
        void display_SingleDetail(void);
};

#endif