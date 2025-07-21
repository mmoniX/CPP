#ifndef CAT_HPP
#define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat( void );
		Cat( std::string ctype );
		Cat( const Cat &obj );
		Cat &operator=( const Cat &obj );
		~Cat();
		void makeSound( void ) const;
};

#endif
