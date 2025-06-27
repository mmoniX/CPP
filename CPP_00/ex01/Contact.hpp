#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>

class Contact
{
    private:
        std::string phone_number;
        std::string darkest_secret;
        std::string format_char(std::string str);
    public:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        void setValue(std::string phone, std::string secret);
        std::string getPhoneNumber(void);
        std::string getDarkestSecret(void);
        void display_contacts(int index);
        void display_detail(void);
        bool is_valid(void);
};

#endif