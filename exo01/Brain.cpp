/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 05:32:22 by bloisel           #+#    #+#             */
/*   Updated: 2024/12/05 16:06:34 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() 
{
		std::cout << "Brain constructor default called " << std::endl;
}

Brain::Brain(const Brain& other) 
{
		std::cout << "Brain copy constructor called for Brain " << std::endl;
		std::cout << "_______________________________________________" << std::endl;
		std::cout << "adress current object Brain " << this << std::endl;
		std::cout << "_______________________________________________" << std::endl;
		std::cout << "adress parameter object Brain " << &other << std::endl;
		std::cout << "_______________________________________________" << std::endl;
		*this = other;
		std::cout << "adress current object Brain " << this << std::endl;
		std::cout << "adress parameter object Brain " << &other << std::endl;
}

Brain& Brain::operator=(const Brain& other) 
{
	if (this == &other)
	{
		 std::cout << "No Auto assignation buddy " << std::endl;
			return *this;
	}
	for (int i = 0; i < 100; i++)
	{
			this->ideas[i] = other.ideas[i];
	}
	std::cout << "adress current object Brain " << this << std::endl;
	std::cout << "adress parameter object Brain " << &other << std::endl;
	return *this;
    
}

Brain::~Brain() 
{
    std::cout << "Brain: Destructor called" << std::endl;
}

void Brain::CheckAdressdeepcopy()
{
		std::cout << "void for the moment " << std::endl;	
}


void Brain::setIdea(const std::string& idee, unsigned int index) 
{
		if (index < 100)
		{
				this->ideas[index] = idee;
		}
		else 
			std::cout << "index might be innapropriate " << std::endl;
}

std::string Brain::getIdea(unsigned int index) const 
{
		if (index < 100)
		{
				return this->ideas[index];
		}
		else
			return ("This index is probably not appropriate");	
}


