#include "Brain.hpp"

Brain::Brain()
{
    std::cout<<  "🧠 Brain constructor" << std::endl;
}


Brain::Brain(const Brain &copy) : 
{
    *this = copy;
    std::cout << "🧠 Brain copy constructor called "<< std::endl;
}

Brain &Brain::operator=(const Brain &other)
{
    std::copy(other.ideas, other.ideas + 100, this->ideas);
    std::cout << "🧠 Brain assignment constructor called" << std:endl;
    return *this;
}

Brain:: ~Brain()
{
    std::cout<<  "🧠 Brain deconstructor" << std::endl;
}

std::string Brain::getIdea(int const &index) const;
{
    if(index >= 0 && index < 100)
        return(this->ideas[index]);
    return(this->ideas[0]);
}

void    Brain::setIdea(std::string const &str, int const &index);
{
    if(index >= 0 && index < 100)
        this->ideas[index] = str;
}
