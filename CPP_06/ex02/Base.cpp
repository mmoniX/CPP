/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 14:19:17 by mmonika           #+#    #+#             */
/*   Updated: 2025/08/21 14:46:12 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base() {};

Base *generate(void)
{
	int index = rand() % 3;
	switch(index)
	{
		case 0:
			std::cout << "Generated A" << std::endl;
			return new A;
		case 1:
			std::cout << "Generated B" << std::endl;
			return new B;
		case 2:
			std::cout << "Generated C" << std::endl;
			return new C;		
	}
	return NULL;
}

void identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "It's Class A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "It's Class B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "It's Class C" << std::endl;
	else
		std::cout << "Class Unknown" << std::endl;
}

void identify(Base &p)
{
	
}