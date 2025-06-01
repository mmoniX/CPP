#include "phonebook.hpp"

std::string format_char(std::string &str)
{
    if (str.length() > 10)
        return (str.substr(0,9) + '.');
    return str;
}

int main(void)
{
    std::string command;
    Contact entry;
    while (true)
    {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        std::cin >> command;
        if (command == "ADD")
        {
            std::cout << "Enter First Name: ";
            std::cin >> entry.first_name;
            std::cout << "Enter Last Name: ";
            std::cin >> entry.last_name;
            std::cout << "Enter Nickname: ";
            std::cin >> entry.nickname;
            std::cout << "Enter Phone Number: ";
            std::cin >> entry.phone_number;
            std::cout << "Enter The Darkest Secret: ";
            std::cin >> entry.darkest_secret;
            entry.index++;
        }
        if (command == "SEARCH")
        {
            std::cout << std::right << std::setw(10) << entry.index << " |" 
                << std::right << std::setw(10) << format_char(entry.first_name) << " |" 
                << std::right << std::setw(10) << format_char(entry.last_name) << " |" 
                << std::right << std::setw(10) << format_char(entry.nickname) << std::endl;
        }
        if (command == "EXIT")
            return (0);
    }
    // ADD-> First Name, Last Name, Nickname, Phone Number, Darkest Secret; {NO EMPTY FIELDS}
    
}