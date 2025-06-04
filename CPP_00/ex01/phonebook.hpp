#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <iomanip>
# include <string>
# include <limits>

class Contact
{
    private:
        std::string phone_number;
        std::string darkest_secret;
        std::string format_char(std::string str);
    public:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        void setValue(std::string phone, std::string secret);
        std::string getPhoneNumber(void);
        std::string getDarkestSecret(void);
        void display_contacts(int index);
        void display_detail(void);
        bool is_valid(void);
};

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