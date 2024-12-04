/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 04:31:16 by bloisel           #+#    #+#             */
/*   Updated: 2024/12/03 05:02:24 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
#define WRONGCAT_H

#include "WrongAnimal.hpp"
#include <string>
#include <iostream>

class WrongCat : public WrongAnimal
{
public:
    WrongCat();
    WrongCat(std::string nameT);
    WrongCat(const WrongCat& other);
    WrongCat& operator=(const WrongCat& other);
    virtual ~WrongCat();
    virtual void makeSound()const;
				virtual std::string getType( void ) const;
    
};

#endif