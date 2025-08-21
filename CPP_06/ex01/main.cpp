/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 13:20:17 by mmonika           #+#    #+#             */
/*   Updated: 2025/08/21 13:55:21 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data info;
	info.c = 'm';
	info.num = 42;
	info.str = "hi! what's up?";
	info.val = true;

	uintptr_t input = Serializer::serialize(&info);
	Data *output = Serializer::deserialize(input);
	
	std::cout << "\n--- address ---\n";
	std::cout << "Original Address:	" << &info << std::endl;
	std::cout << "Deserialize Address:	" << output << std::endl;
	
	std::cout << "\n--- values ---\n";
	std::cout << "Char:	" << output->c << std::endl;
    std::cout << "Int:	" << output->num << std::endl;
    std::cout << "String:	" << output->str << std::endl;
    std::cout << "Bool:	" << output->val << std::endl;

	return (0);
}
