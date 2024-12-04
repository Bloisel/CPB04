/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 04:47:27 by bloisel           #+#    #+#             */
/*   Updated: 2024/12/04 16:47:12 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"
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
   std::cout <<" ____________________________________________________________________ " << std::endl; 
   for (int i = 0; i < 10; i++)
   {
      if (i < 5)
      {
         nouka[i] = new Dog;
         if (nouka[i] == NULL)
         {
            std::cout << "NULL" << std::endl;
            return (0);
         }
         std::cout <<" ____________________________________________________________________ " << std::endl; 
      }
      else
      {
         nouka[i] = new Cat;
         if (nouka[i] == NULL)
         {
            std::cout << "NULL" << std::endl;
            return (0);
         }
         std::cout <<" ____________________________________________________________________ " << std::endl; 
      }
   }
   std::cout <<" ____________________________________________________________________ " << std::endl; 
   for (int x = 0; x < 10; x++)
   {
      delete nouka[x];
      std::cout <<" ____________________________________________________________________ " << std::endl; 
   }
   std::cout << " Test main de l'exo " << std::endl;
   const Animal* j = new Dog();
   const Animal* i = new Cat();
   delete j;//should not create a leak
   delete i;
   std::cout <<" ____________________________________________________________________ " << std::endl; 
   const Animal* h = new Dog();
   h->getType();
   h->makeSound();
   delete h;
   Dog *test = new Dog();
   test->getBrain();
   test.set
    
}
