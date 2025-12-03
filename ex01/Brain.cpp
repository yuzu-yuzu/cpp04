/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjiang <hjiang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 13:08:23 by hjiang            #+#    #+#             */
/*   Updated: 2025/12/03 15:26:58 by hjiang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout<<  "🧠 Brain constructor" << std::endl;
}


Brain::Brain(const Brain &copy)
{
    std::copy(copy.ideas, copy.ideas + 100, this->ideas);
    std::cout << "🧠 Brain copy constructor called "<< std::endl;
}

Brain &Brain::operator=(const Brain &other)
{
    std::copy(other.ideas, other.ideas + 100, this->ideas);
    std::cout << "🧠 Brain assignment constructor called" << std::endl;
    return *this;
}

Brain:: ~Brain()
{
    std::cout<<  "🧠 Brain deconstructor" << std::endl;
}

std::string Brain::getIdea(int const &index) const
{
    if(index >= 0 && index < 100)
        return(this->ideas[index]);
    return(this->ideas[0]);
}

void    Brain::setIdea(std::string const &str, int const &index)
{
    if(index >= 0 && index < 100)
        this->ideas[index] = str;
}
