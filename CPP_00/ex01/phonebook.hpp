#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <iomanip>
# include <string>
# include <list>

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
        void display_contacts(int index)
        {
            std::cout << std::right << std::setw(10) << index << " | " 
                    << std::right << std::setw(10) << format_char(first_name) << " | " 
                    << std::right << std::setw(10) << format_char(last_name) << " | " 
                    << std::right << std::setw(10) << format_char(nickname) << std::endl;
        }
        void display_detail()
        {
            std::cout << "First Name: " << first_name << std::endl;
            std::cout << "Last Name: " << last_name << std::endl;
            std::cout << "Nickname: " << nickname << std::endl;
            std::cout << "Phone Number: " << phone_number << std::endl;
            std::cout << "Darkest Secret: " << darkest_secret << std::endl;
        }
};

class PhoneBook
{
    private:
        Contact  contacts[8];
        int index;
        int count;
    public:
        PhoneBook() : index(0), count(0) {}
        void add_Contact(Contact entry)
        {
            if (count < 8)
            {
                contacts[(index + count) % 8] = entry;
                count++;
            }
            else
            {
                contacts[index] = entry;
                index = (index + 1) % 8;
            }            
        }
        void display_AllContacts()
        {
            std::cout << "Index      | First Name | Last Name  | Nickname  " << std::endl;
            std::cout << "-------------------------------------------------" << std::endl;
            int i = 0;
            while (i < count)
            {
                int j = (index + i) % 8;
                contacts[j].display_contacts(i);
                i++;
            }
        }
        void display_SingleDetail(int user_index)
        {
            if (user_index < 0 || user_index >= count)
            {
                std::cout << "Invalid index. Please enter a valid index." << std::endl;
                return;
            }
            int j = (index + user_index) % 8;
            contacts[j].display_detail();
        }
};


#endif