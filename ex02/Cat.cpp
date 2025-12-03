/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjiang <hjiang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 13:08:37 by hjiang            #+#    #+#             */
/*   Updated: 2025/12/03 13:08:37 by hjiang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"
#include"Brain.hpp"

Cat::Cat() : AAnimal("🐱 Cat")
{
    this->brain = new Brain();
    std::cout << "🐱 Cat constructor called" << std::endl;
}

Cat::Cat(std::string type) : AAnimal(type)
{
    this->brain = new Brain();
    std::cout << "🐱 Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &copy) : AAnimal(copy)
{
    this->brain = new Brain(*copy.brain);
    std::cout << "🐱 Copy of Cat "<< copy.type << " called" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
    if (this != &other)
    {   
        *this->brain = *other.brain;
        AAnimal::operator=(other);
    }
    std::cout << "🐱 Copy assignment of " << other.type << "called" << std::endl;
    return *this;
}

Cat:: ~Cat()
{
    delete this->brain;
    std::cout << "🐱 Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "ᓚ₍ ^. ̫ .^₎ Meow." << std::endl;  
}

Brain &Cat::getbrain() const
{
    return(*this->brain);
}

void Cat::setbrain(Brain const &brain)
{
    *this->brain = brain;
}
