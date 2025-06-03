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
        std::string format_char(std::string str)
        {
            if (str.length() > 10)
                return (str.substr(0,9) + '.');
            return str;
        }
    public:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        void setValue(std::string phone, std::string secret)
        {
            phone_number = phone;
            darkest_secret = secret;
        }
        std::string getPhoneNumber() { return phone_number; }
        std::string getDarkestSecret() { return darkest_secret; }
        void display_contacts(int index);
        void display_detail();
        bool is_valid();
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
        void display_AllContacts();
        void display_SingleDetail(int user_index);
};

#endif