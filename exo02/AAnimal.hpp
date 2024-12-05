/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 04:47:25 by bloisel           #+#    #+#             */
/*   Updated: 2024/12/05 17:18:30 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal {
protected:
    std::string _type;

public:
    
    AAnimal();
    AAnimal(const std::string& type);
    AAnimal(const AAnimal& other);
    virtual ~AAnimal(); 

    
    AAnimal& operator=(const AAnimal& other);

  
    virtual void makeSound() const = 0; // Ma methode virtuelle pure
    std::string getType() const;
};

#endif
