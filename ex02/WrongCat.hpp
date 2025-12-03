/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjiang <hjiang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 13:10:49 by hjiang            #+#    #+#             */
/*   Updated: 2025/12/03 13:10:49 by hjiang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include<iostream>
#include"WrongAnimal.hpp"
#include"Brain.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(std::string type);
        WrongCat(const WrongCat &copy);
        WrongCat &operator=(const WrongCat &other);
        ~WrongCat();

        void makeSound() const;
        Brain &getbrain() const;
        void setbrain(Brain const &brain); // faut il settype ?
        
        private:
            Brain *brain;
};

#endif