/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonika <mmonika@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 12:45:23 by mmonika           #+#    #+#             */
/*   Updated: 2025/08/21 14:53:51 by mmonika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALISER_HPP

# include <cstdint>
# include "Data.hpp"

class Serializer
{
	private:
		Serializer();
		~Serializer();
		Serializer (const Serializer &obj);
		Serializer &operator=(const Serializer &obj);
	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif


/*
static_cast: 
compile-time type conversion and is mainly used for explicit conversions 
that are considered safe by the compiler.

dynamic_cast: ===>ex02
perform downcasting (converting a pointer/reference of a base class to a 
derived class) in polymorphisms and inheritance. It ensures type safety by 
performing a runtime check to verify the validity of the conversion.

const_cast:
modify the const or volatile qualifier of a variable. It allows programmers 
to temporarily remove the constancy of an object and make modifications.

reinterpret_cast: ==>ex01
convert the pointer to any other type of pointer. It does not perform any 
check whether the pointer converted is of the same type or not.
*/