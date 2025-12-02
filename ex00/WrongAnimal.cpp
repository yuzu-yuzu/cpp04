#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Unknow WrongAnimal")
{
    std::cout << "❌🐾 WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &name) : type(name)
{
    std::cout << "❌🐾 WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy):type(copy.type)
{
    std::cout << "❌🐾 Copy of WrongAnimal "<< copy.type << " called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
    if (this != &other)
    {   
        this->type = other.type;
    }
    std::cout << "❌🐾 Copy assignment of " << other.type << "called" << std::endl;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "❌🐾 WrongAnimal destructor called" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return(this->type);
}

void WrongAnimal::makeSound() const
{
    std::cout << PINK "(☞ ͡° ͜ʖ ͡°)☞ !!...?" RESET << std::endl;  
}