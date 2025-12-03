/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjiang <hjiang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 13:08:17 by hjiang            #+#    #+#             */
/*   Updated: 2025/12/03 13:08:17 by hjiang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

#define RESET		"\033[0m"
#define BLACK		"\033[30m"
#define RED			"\033[31m"
#define GREEN		"\033[32m"
#define YELLOW		"\033[33m"
#define BABYBLUE		"\033[38;5;153m"
#define CYAN		"\033[36m"
#define PINK		"\033[38;5;205m"

class Animal
{
    public:
        Animal();
        Animal(const std::string &name);
        Animal(const Animal &copy);
        Animal &operator=(const Animal &other);
        virtual ~Animal();

        std::string getType() const;
        virtual void makeSound() const;

    protected:
        std::string type;
};

#endif