/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 04:47:27 by bloisel           #+#    #+#             */
/*   Updated: 2024/12/05 17:17:34 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"
#include <iostream>

int main() 
{
   AAnimal   *nouka[10];
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
   // std::cout << "test non instanciable " << std::endl;
   // AAnimal a;  
   std::cout <<" ____________________________________________________________________ " << std::endl; 

   AAnimal* test = new Dog();
   test->getType();
   test->makeSound();

   delete test;

   AAnimal *test2 = new Cat();
   test2->getType();
   test2->makeSound();

   delete test2;
   
}
