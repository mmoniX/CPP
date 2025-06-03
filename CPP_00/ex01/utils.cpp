#include "phonebook.hpp"

bool Contact::is_valid()
{
    return !first_name.empty() && !last_name.empty() &&
           !nickname.empty() && !phone_number.empty() && 
           !darkest_secret.empty();
}

void Contact::display_contacts(int index)
{
    std::cout << std::right << std::setw(10) << index << " | " 
            << std::right << std::setw(10) << format_char(first_name) << " | " 
            << std::right << std::setw(10) << format_char(last_name) << " | " 
            << std::right << std::setw(10) << format_char(nickname) << std::endl;
}

void Contact::display_detail()
{
    std::cout << "First Name     : " << first_name << std::endl;
    std::cout << "Last Name      : " << last_name << std::endl;
    std::cout << "Nickname       : " << nickname << std::endl;
    std::cout << "Phone Number   : " << phone_number << std::endl;
    std::cout << "Darkest Secret : " << darkest_secret << std::endl;
}

void PhoneBook::add_Contact(Contact entry)
{
    if (!entry.is_valid())
    {
        std::cerr << "Please fill all fields to save the contact." << std::endl;
        return;
    }
    contacts[index] = entry;
    index = (index + 1) % 8;
    if (count < 8)
        count++;
}

void PhoneBook::display_AllContacts()
{
    std::cout << "Index      | First Name | Last Name  | Nickname  " << std::endl;
    std::cout << "-------------------------------------------------" << std::endl;
    int i = 0;
    while (i < count)
    {
        contacts[i].display_contacts(i);
        ++i;
    }
}

void PhoneBook::display_SingleDetail(int user_index)
{
    if (user_index < 0 || user_index >= count)
    {
        std::cerr << "Invalid Index." << std::endl;
        return;
    }
    contacts[user_index].display_detail();
}
