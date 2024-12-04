/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 02:23:06 by bloisel           #+#    #+#             */
/*   Updated: 2024/12/04 15:47:27 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


    Dog::Dog() : Animal("Dog")
				{
					std::cout << "Constructeur du chien" << std::endl;
				}
				
    Dog::Dog(const Dog& other) : Animal(other)
				{
							std::cout << "Dog copy constructo called" << std::endl;
							*this = other;
						
				}
    Dog& Dog::operator=(const Dog& other)
				{
						this->_type = other._type;
						std::cout << "Dog _type has been assigned " << std::endl;
						return *this;
				}
    Dog::~Dog() {std::cout << "Destructor Dog called" << std::endl;}

				void Dog::makeSound()const
				{
						std::cout << "Le Dog aboie Wouf Wouf" << std::endl;
				}
				
				std::string Dog::getType()const
				{
							return this->_type;
				}