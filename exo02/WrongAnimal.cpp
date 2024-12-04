/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 04:24:44 by bloisel           #+#    #+#             */
/*   Updated: 2024/12/04 15:40:04 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"


    WrongAnimal::WrongAnimal() : _type("Everybody is an animal") {std::cout << "Default WrongAnimal Cosntructo called "<< std::endl;}

	WrongAnimal::WrongAnimal(std::string nameT) : _type(nameT)
	{
		std::cout << "constructor called with type " << _type << std::endl;
	}
					
    WrongAnimal::WrongAnimal(const WrongAnimal& other)
	{
		std::cout << "copy constructo called WrongAnimal" << std::endl;
		*this = other;
						
	}
    
	WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
	{
		this->_type = other._type;
		std::cout << "WrongAnimal _type has been assigned " << std::endl;
		return *this;
	}
    
	WrongAnimal::~WrongAnimal() {std::cout << "Destructor WrongAnimal called" << std::endl;}

	void WrongAnimal::makeSound()const
	{
		std::cout << "This is the WrongAnimal buuuut which one im not making any sounds i dont know who i am " << std::endl;
	}

	std::string WrongAnimal::getType()const
	{
		return this->_type;
	}