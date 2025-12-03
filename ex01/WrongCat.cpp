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
    std::cout << "❌🐈 WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
    std::cout << "❌🐈 WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy)
{
    std::cout << "❌🐈 WrongCat of Cat "<< copy.type << " called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
    if (this != &other)
    {   
        WrongAnimal::operator=(other);
    }
    std::cout << "❌🐈 WrongCat assignment of " << other.type << "called" << std::endl;
    return *this;
}
 
WrongCat::~WrongCat()
{
    std::cout << "❌🐈 WrongCat destructor called" << std::endl;
}


void WrongCat::makeSound() const
{
    std::cout << PINK "≽ ^⎚ ˕ ⎚^ ≼ Mao Mao." RESET<< std::endl;
}