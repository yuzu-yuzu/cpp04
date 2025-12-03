/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjiang <hjiang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 13:10:22 by hjiang            #+#    #+#             */
/*   Updated: 2025/12/03 13:10:22 by hjiang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
    AAnimal *tab[10];
    //AAnimal *pet = new AAnimal(); //affiche "object of sbstract class"

    for(int a =0; a < 5; a++)
        tab[a] = new Dog();
    for(int b = 5; b < 10; b++)
        tab[b] = new Cat();
    for(int nb =0; nb < 10; nb++)
        tab[nb]->makeSound();
    for(int n =0; n < 10; n++)
        delete tab[n];
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    delete j;//should not create a leak
    delete i;

    return 0;
}
