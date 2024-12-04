/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 04:47:27 by bloisel           #+#    #+#             */
/*   Updated: 2024/12/04 15:57:54 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

// #include "Dog.hpp"
// #include "Cat.hpp"
#include <iostream>

int main() 
{
   // Brain a;
   
   // Brain b(a);
   // b.setIdea("je mapelle donald", 0);
   // b.getIdea(0);
   // std::cout << "get idea pour b apres copy " << b.getIdea(0) << std::endl;
   // Brain c = b;
   // std::cout << "get idea de c assignement " << c.getIdea(0) << std::endl;
   Animal   *nouka[10]; 
   for (int i = 0; i < 3 ; i++)
   {
      nouka[i] = new Dog;
   }
   return (0);
   for (int i = 0; i < 3; i++)
   {
      delete nouka[i];
   } 
}
