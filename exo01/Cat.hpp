/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 02:23:06 by bloisel           #+#    #+#             */
/*   Updated: 2024/12/05 13:51:27 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include "Brain.hpp"
#include "Animal.hpp"
#include <string>
#include <iostream>

class Cat : public Animal
{

private:
    Brain *brain;    


public:
    Cat();
    Cat(const Cat& other);
    Cat& operator=(const Cat& other);
    ~Cat();
	virtual void makeSound()const;
	// virtual std::string getType( void ) const;
    void IdeaBrain() const;
    void SetideaBrain() const;
    
};




#endif