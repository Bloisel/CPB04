/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 04:47:25 by bloisel           #+#    #+#             */
/*   Updated: 2024/12/05 14:10:37 by bloisel          ###   ########.fr       */
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
    // Constructeurs et destructeur
    AAnimal();
    AAnimal(const std::string& type);
    AAnimal(const AAnimal& other);
    virtual ~AAnimal(); // Virtual destructor obligatoire pour une classe abstraite

    // Opérateur d'assignation
    AAnimal& operator=(const AAnimal& other);

    // Méthodes
    virtual void makeSound() const = 0; // Méthode virtuelle pure
    std::string getType() const;
};

#endif
