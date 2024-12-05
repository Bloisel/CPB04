/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 02:23:06 by bloisel           #+#    #+#             */
/*   Updated: 2024/12/05 17:01:03 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


 Cat::Cat() : Animal("Cat") 
{
    std::cout << "Constructeur CAT defaut" << std::endl;
    brain = new Brain();
  
}

Cat::Cat(const Cat& other) : Animal(other) 
{
    //std::cout << "other.brain classique " << other.brain << std::endl; // ptr vers un Objet Brain dans other (adress du ptr)
    //std::cout << "ref other de brain " << &other.brain << std::endl; // adresse de variable brain dans other 
    std::cout << "copy CAT constructor called " << std::endl;
    this->brain = new Brain(*other.brain); // deep copy fait pointer this->brain vers nouvel objet Brain(a partir de *otherbrain obj Brain dands other) 
    std::cout << "this brain "<< this->brain << std::endl;
    // != d une shallow copy avec Brain mm adresse memoire 
    // shallow copy auraity ressemble a un truc this->brain = other.brain pointe vers le mm objet Brain
   
}


Cat& Cat::operator=(const Cat& other) 
{
    std::cout << "copy assignement CAT operator called " << std::endl;
    if (this != &other)
    {
        //this->_type = other._type;
        delete brain;
        this->brain = new Brain(*other.brain);
    }
    return *this;
    
}

Cat::~Cat() 
{
    delete this->brain;
    std::cout << "Cat: Destructor called" << std::endl;
}

void Cat::makeSound() const 
{
    std::cout << "Cat: Meow Meow!" << std::endl;
}

void Cat::SetideaBrain() const
{
     if (this->brain == nullptr) {
        std::cerr << "Error: brain is nullptr in SetideaBrain!" << std::endl;
        return;
    }
    this->brain->setIdea("je mappelle nouka", 0);
    this->brain->setIdea("je mapelle Adil", 1);
    for (unsigned int i = 2; i < 6; i++)
    {
        this->brain->setIdea("loop testing", i);
    }    
}

void Cat::IdeaBrain() const
{
    for (unsigned int i = 0; i < 6; i++)
    {
        std::cout << this->brain->getIdea(i) << std::endl;
    }
}
