/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjiang <hjiang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 16:12:09 by hjiang            #+#    #+#             */
/*   Updated: 2025/12/03 16:16:27 by hjiang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP
#include <iostream>

#define RESET		"\033[0m"
#define BLACK		"\033[30m"
#define RED			"\033[31m"
#define GREEN		"\033[32m"
#define YELLOW		"\033[33m"
#define BABYBLUE		"\033[38;5;153m"
#define CYAN		"\033[36m"
#define PINK		"\033[38;5;205m"

class AAnimal
{
    public:
        AAnimal();
        AAnimal(const std::string &name);
        AAnimal(const AAnimal &copy);
        AAnimal &operator=(const AAnimal &other);
        virtual ~AAnimal();

        std::string getType() const;
        virtual void makeSound() const = 0;

    protected:
        std::string type;
};

#endif