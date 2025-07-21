#ifndef Animal_HPP
#define Animal_HPP

# include <iostream>

class AAnimal
{
	protected:
		std::string type;
	public:
		AAnimal( void );
		AAnimal( std::string atype );
		AAnimal( const AAnimal &obj );
		AAnimal &operator=( const AAnimal &obj );
		virtual ~AAnimal();

		std::string getType( void ) const;
		virtual void makeSound( void ) const = 0;
};

#endif
