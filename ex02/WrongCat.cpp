/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjiang <hjiang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 13:10:44 by hjiang            #+#    #+#             */
/*   Updated: 2025/12/03 13:10:44 by hjiang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    this->brain = new Brain();
    std::cout << "❌🐈 WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
    this->brain = new Brain();
    std::cout << "❌🐈 WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy)
{
    this->brain = new Brain(*copy.brain);
    std::cout << "❌🐈 WrongCat of Cat "<< copy.type << " called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
    if (this != &other)
    {   
        *this->brain = *other.brain;
        WrongAnimal::operator=(other);
    }
    std::cout << "❌🐈 WrongCat assignment of " << other.type << "called" << std::endl;
    return *this;
}
 
WrongCat::~WrongCat()
{
    delete this->brain;
    std::cout << "❌🐈 WrongCat destructor called" << std::endl;
}


void WrongCat::makeSound() const
{
    std::cout << PINK "≽ ^⎚ ˕ ⎚^ ≼ Mao Mao." RESET<< std::endl;
}

Brain &WrongCat::getbrain() const
{
    return(*this->brain);
}

void WrongCat::setbrain(Brain const &brain)
{
    *this->brain = brain;
}
