#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <iomanip>
# include <string>
# include <list>

// list<std::string> Contract
// Contract.push_back()
// Contract.pop_front()
// Contract.size() == 8
class PhoneBook
{
    //array of 8 contacts
}
class Contact
{
    private:
        std::string phone_number;
        std::string darkest_secret;
    public:
        int index;
        std::string first_name;
        std::string last_name;
        std::string nickname;
};

#endif