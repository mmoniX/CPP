#ifndef DOG_HPP
#define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain* dogbrain;
	public:
		Dog( void );
		Dog( std::string dtype );
		Dog( const Dog &obj );
		Dog &operator=( const Dog &obj );
		~Dog();
		void makeSound( void ) const;
		Brain *getBrain( void );
};

#endif
