/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 04:47:23 by bloisel           #+#    #+#             */
/*   Updated: 2024/12/03 04:52:30 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


    Animal::Animal() : _type("Everybody is an animal") {std::cout << "Default Animal Cosntructo called "<< std::endl;}

				Animal::Animal(std::string nameT) : _type(nameT)
				{
						std::cout << "constructor called with type " << _type << std::endl;
				}
					
    Animal::Animal(const Animal& other)
				{
							std::cout << "copy constructo called" << std::endl;
							*this = other;
						
				}
    Animal& Animal::operator=(const Animal& other)
				{
						this->_type = other._type;
						std::cout << "Animal _type has been assigned " << std::endl;
						return *this;
				}
    Animal::~Animal() {std::cout << "Destructor Animal called" << std::endl;}

			void Animal::makeSound()const
				{
						std::cout << "This is an Animal buuuut which one im not making any sounds i dont know who i am " << std::endl;
				}

				std::string Animal::getType()const
				{
							return this->_type;
				}
				
				
