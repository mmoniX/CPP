#ifndef BRAIN_HPP
#define BRAIN_HPP

# include <iostream>

class Brain
{
	protected:
		std::string ideas[100];
	public:
		Brain( void );
		Brain( std::string idea );
		Brain( const Brain &obj );
		Brain &operator=( const Brain &obj );
		~Brain();
		void setIdea( const std::string &idea );
		std::string getIdea( void );
};

#endif
