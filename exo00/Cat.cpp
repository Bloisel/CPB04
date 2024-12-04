/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 02:23:06 by bloisel           #+#    #+#             */
/*   Updated: 2024/12/03 04:53:07 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


    Cat::Cat() : Animal("Cat")
				{
					std::cout << "Constructeur du chat" << std::endl;
				}
				
    Cat::Cat(const Cat& other)
				{
							std::cout << "Chat copy constructo called" << std::endl;
							*this = other;
						
				}
    Cat& Cat::operator=(const Cat& other)
				{
						this->_type = other._type;
						std::cout << "Chat _type has been assigned " << std::endl;
						return *this;
				}
    Cat::~Cat() {std::cout << "Destructor Chat called" << std::endl;}

				void Cat::makeSound()const
				{
						std::cout << "Le Chat fait Miaou Miaou" << std::endl;
				}

				std::string Cat::getType()const
				{
							return this->_type;
				}