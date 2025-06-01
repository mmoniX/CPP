#include "phonebook.hpp"

int main(void)
{
    PhoneBook phonebook;
    std::string command;
    while (true)
    {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        std::cin >> command;
        if (command == "ADD")
        {
            Contact entry;
            std::cout << "Enter First Name: ";
            std::cin >> entry.first_name;
            std::cout << "Enter Last Name: ";
            std::cin >> entry.last_name;
            std::cout << "Enter Nickname: ";
            std::cin >> entry.nickname;
            std::string phone, secret;
            std::cout << "Enter Phone Number: ";
            std::cin >> phone;
            std::cout << "Enter The Darkest Secret: ";
            std::cin >> secret;
            entry.setValue(phone, secret);
            phonebook.add_Contact(entry);
        }
        else if (command == "SEARCH")
        {
            phonebook.display_AllContacts();
            std::cout << "Enter contact index: ";
            int contact_index;
            if (!(std::cin >> contact_index))
                std::cout << "Invalid Index." << std::endl;
            else
                phonebook.display_SingleDetail(contact_index);
        }
        else if (command == "EXIT")
            break;
        else
            std::cout << "Invalid command. Try ADD, SEARCH, or EXIT." << std::endl;
    }
    return (0);
}
