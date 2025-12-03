/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjiang <hjiang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 16:11:58 by hjiang            #+#    #+#             */
/*   Updated: 2025/12/03 16:11:58 by hjiang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type("Unknow AAnimal")
{
    std::cout << "🐾 AAnimal constructor called" << std::endl;
}

AAnimal::AAnimal(const std::string &name) : type(name)
{
    std::cout << "🐾 AAnimal constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &copy):type(copy.type)
{
    std::cout << "🐾 Copy of AAnimal "<< copy.type << " called" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &other)
{
    if (this != &other)
    {   
        this->type = other.type;
    }
    std::cout << "🐾 Copy assignment of " << other.type << "called" << std::endl;
    return *this;
}

AAnimal::~AAnimal()
{
    std::cout << "🐾 AAnimal destructor called" << std::endl;
}

std::string AAnimal::getType() const
{
    return(this->type);
}

void AAnimal::makeSound() const
{
    std::cout << "...?" << std::endl;  
}