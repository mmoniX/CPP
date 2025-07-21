#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal( void );
		WrongAnimal( std::string atype );
		WrongAnimal( const WrongAnimal &obj );
		WrongAnimal &operator=( const WrongAnimal &obj );
		~WrongAnimal();

		std::string getType( void ) const;
		void makeSound( void ) const;
};

#endif
