#include "Animal.hpp"

Animal::Animal() : type("Unknow Animal")
{
    std::cout << "🐾 Animal constructor called" << std::endl;
}

Animal::Animal(const std::string &name) : type(name)
{
    std::cout << "🐾 Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &copy):type(copy.type)
{
    std::cout << "🐾 Copy of Animal "<< copy.type << " called" << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
    if (this != &other)
    {   
        this->type = other.type;
    }
    std::cout << "🐾 Copy assignment of " << other.type << "called" << std::endl;
    return *this;
}

Animal::~Animal()
{
    std::cout << "🐾 Animal destructor called" << std::endl;
}

std::string Animal::getType() const
{
    return(this->type);
}

void Animal::makeSound() const
{
    std::cout << "...?" << std::endl;  
}
