#include "phonebook.hpp"

int main(void)
{
    PhoneBook phonebook;
    std::string command;
    while (true)
    {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);
        if (command == "ADD")
        {
            Contact entry;
            std::string phone, secret;
            std::cout << "Enter First Name: ";
            std::getline(std::cin, entry.first_name);
            std::cout << "Enter Last Name: ";
            std::getline(std::cin, entry.last_name);
            std::cout << "Enter Nickname: ";
            std::getline(std::cin, entry.nickname);
            std::cout << "Enter Phone Number: ";
            std::getline(std::cin, phone);
            std::cout << "Enter The Darkest Secret: ";
            std::getline(std::cin, secret);
            entry.setValue(phone, secret);
            phonebook.add_Contact(entry);
        }
        else if (command == "SEARCH")
        {
            phonebook.display_AllContacts();
            std::cout << "Enter contact index: ";
            int contact_index;
            if (!(std::cin >> contact_index))
                std::cerr << "Invalid Index." << std::endl;
            else
                phonebook.display_SingleDetail(contact_index);
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        else if (command == "EXIT")
            break;
        else
            std::cerr << "Invalid command. Try ADD, SEARCH, or EXIT." << std::endl;
    }
    return (0);
}
