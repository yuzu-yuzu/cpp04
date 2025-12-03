/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjiang <hjiang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 13:07:23 by hjiang            #+#    #+#             */
/*   Updated: 2025/12/03 13:07:23 by hjiang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"

Cat::Cat() : Animal("🐱 Cat")
{
    this->type = "🐱 Cat";
    std::cout << "🐱 Cat constructor called" << std::endl;
}

Cat::Cat(std::string type) : Animal(type)
{
    std::cout << "🐱 Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
    std::cout << "🐱 Copy of Cat "<< copy.type << " called" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
    if (this != &other)
    {   
        Animal::operator=(other);
    }
    std::cout << "🐱 Copy assignment of " << other.type << "called" << std::endl;
    return *this;
}

Cat:: ~Cat()
{
    std::cout << "🐱 Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "ᓚ₍ ^. ̫ .^₎ Meow." << std::endl;  
}
