/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 14:54:25 by mmonika           #+#    #+#             */
/*   Updated: 2026/03/28 16:11:10 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main()
{
	std::srand(static_cast<unsigned int>(std::time(NULL)));

	for (int i = 0; i < 7; ++i)
	{
		Base *p = generate();
		std::cout << "identify(Base*): ";
		identify(p);
		std::cout << "identify(Base&): ";
		identify(*p);
		delete p;
	}

	return (0);
}