#ifndef CAT_HPP
#define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
	private:
		Brain* catbrain;
	public:
		Cat( void );
		Cat( std::string ctype );
		Cat( const Cat &obj );
		Cat &operator=( const Cat &obj );
		~Cat();
		void makeSound( void ) const;
		Brain *getBrain( void );
};

#endif
