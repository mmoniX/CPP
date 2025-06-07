#include "phonebook.hpp"

std::string Contact::format_char(std::string str)
{
    if (str.length() > 10)
        return (str.substr(0,9) + '.');
    return str;
}

void Contact::setValue(std::string phone, std::string secret)
{
    phone_number = phone;
    darkest_secret = secret;
}

std::string Contact::getPhoneNumber(void)
{
    return phone_number;
}
        
std::string Contact::getDarkestSecret(void)
{
    return darkest_secret;
}

bool Contact::is_valid(void)
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

void Contact::display_detail(void)
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

bool PhoneBook::display_AllContacts(void)
{
    if (count == 0)
    {
        std::cout << "Empty Phonebook: Nothing to display" << std::endl;
        return (false);
    }
    std::cout << "Index      | First Name | Last Name  | Nickname  " << std::endl;
    std::cout << "-------------------------------------------------" << std::endl;
    int i = 0;
    while (i < count)
    {
        contacts[i].display_contacts(i);
        ++i;
    }
    return (true);
}

void PhoneBook::display_SingleDetail(void)
{
    int user_index;
    std::cout << "Enter contact index: ";
    if (!(std::cin >> user_index))
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cerr << "Invalid Index." << std::endl;
        return;
    }
    if (user_index < 0 || user_index >= count)
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cerr << "Index out of range." << std::endl;
        return;
    }
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    contacts[user_index].display_detail();
}
