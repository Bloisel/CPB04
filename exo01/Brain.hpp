/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 05:32:25 by bloisel           #+#    #+#             */
/*   Updated: 2024/12/04 16:45:26 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BRAIN_H
#define BRAIN_H

#include <string>
#include <iostream>

class Brain 
{
private:
    std::string ideas[100];

public:
    Brain();
    Brain(const Brain& other);
    Brain& operator=(const Brain& other);
    ~Brain();

	void CheckAdressdeepcopy();
	void setIdea(const std::string& idee, unsigned int index);
    std::string getIdea(unsigned int index) const;
				 
};


#endif