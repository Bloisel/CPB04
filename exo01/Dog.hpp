/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 02:23:19 by bloisel           #+#    #+#             */
/*   Updated: 2024/12/05 13:59:35 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"
#include "Brain.hpp"
#include <string>
#include <iostream>

class Dog : public Animal
{

private:
    Brain* brain;
    
public:
    
    Dog();
    Dog(const Dog& other);
    Dog& operator=(const Dog& other);
    ~Dog();
	virtual void makeSound()const;
	// virtual std::string getType( void ) const;

    void IdeaBrain() const;
    void SetideaBrain() const;
     
    // void setterCerveau() const;
    // void getterCerveau() const; 
    
};




#endif