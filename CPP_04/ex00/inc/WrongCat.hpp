#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat( void );
		WrongCat( std::string ctype );
		WrongCat( const WrongCat &obj );
		WrongCat &operator=( const WrongCat &obj );
		~WrongCat();
		void makeSound( void ) const;
};

#endif
