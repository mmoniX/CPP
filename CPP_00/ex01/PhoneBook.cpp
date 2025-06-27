#include "phonebook.hpp"

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
