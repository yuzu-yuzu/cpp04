/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjiang <hjiang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 13:10:12 by hjiang            #+#    #+#             */
/*   Updated: 2025/12/03 13:10:12 by hjiang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"
#include"Brain.hpp"

Dog::Dog() : Animal() 
{
    this->type = "🐶 Dog";
    this->brain = new Brain();
    std::cout << "🐶 Dog constructor called" << std::endl;
}

Dog::Dog(std::string type) : Animal (type)
{
    this->brain = new Brain();
    std::cout << "🐶 Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal (copy)
{
    this->brain = new Brain(*copy.brain);
    std::cout << "🐶 Copy of Dog "<< copy.type << " called" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
    if (this != &other)
    {   
        *this->brain = *other.brain;
        Animal::operator=(other);
    }
    std::cout << "🐶 Copy assignment of " << other.type << "called" << std::endl;
    return *this;
}

Dog:: ~Dog()
{
    delete this->brain;
    std::cout << "🐶 Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "૮⍝• ᴥ •⍝ა  WAF!! " << std::endl;  
}

Brain &Dog::getbrain() const
{
    return(*this->brain);
}

void Dog::setbrain(Brain const &brain)
{
    *this->brain = brain;
}
