/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 14:54:25 by mmonika           #+#    #+#             */
/*   Updated: 2026/03/29 13:17:19 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

void test(Base obj)
{
	std::cout << "test(Base&): ";
	identify(obj);
}

int main()
{
	std::srand(static_cast<unsigned int>(std::time(NULL)));

	for (int i = 0; i < 5; ++i)
	{
		Base *p = generate();
		std::cout << "identify(Base*): ";
		identify(p);
		std::cout << "identify(Base&): ";
		identify(*p);
		delete p;
	}

	Base *p1 = new A;
	std::cout << "(Base*): ";
	identify(p1);
	test(*p1);

	std::cout << "\n--- Unknown tests ---\n";
	Base base;
	std::cout << "identify(Base&): ";
	identify(base);
	Base *pb = new Base;
	std::cout << "identify(Base*): ";
	identify(pb);
	delete pb;
	std::cout << "identify(Base*): ";
	identify(NULL);
	delete p1;
	return (0);
}
