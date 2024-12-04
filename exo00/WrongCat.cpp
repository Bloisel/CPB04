/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 04:31:14 by bloisel           #+#    #+#             */
/*   Updated: 2024/12/04 15:46:50 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongCat.hpp"


    WrongCat::WrongCat() : WrongAnimal("Wrongmezmew")
				{
					std::cout << "Constructeur du WrongCat" << std::endl;
				}
				
    WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
				{
							std::cout << "WrongCat copy constructo called" << std::endl;
							*this = other;
						
				}
    WrongCat& WrongCat::operator=(const WrongCat& other)
				{
						this->_type = other._type;
						std::cout << "WrongCat _type has been assigned " << std::endl;
						return *this;
				}
    WrongCat::~WrongCat() {std::cout << "Destructor WrongCat called" << std::endl;}

				void WrongCat::makeSound()const
				{
					std::cout << "Le WrongCat aboie Wouf Wouf" << std::endl;
				}

				std::string WrongCat::getType()const
				{
							return this->_type;
				}