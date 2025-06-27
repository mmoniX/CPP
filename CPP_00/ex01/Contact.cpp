#include "Contact.hpp"

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
