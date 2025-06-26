#include "Harl.hpp"

void Harl::debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n" << std::endl;
};

void Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n" << std::endl;
};

void Harl::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free.\nI've been coming for years, whereas you started working here just last month.\n" << std::endl;
};

void Harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
};

void Harl::complain( std::string level )
{
    std::string levels[] = {"DEBUG","INFO","WARNING","ERROR"};
    using function = void (Harl::*)(void);
    function func[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    for (int i = 0; i < 4; i++)
    {
        if (level == levels[i])
        {
            std::invoke(func[i], this);
            return;
        }
    }
    std::cout << "Unknown level: " << level << std::endl;
};
