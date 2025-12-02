#include"Dog.hpp"

Dog::Dog() : Animal() 
{
    this->type = "🐶 Dog";
    std::cout << "🐶 Dog constructor called" << std::endl;
}

Dog::Dog(std::string type) : Animal (type)
{
    std::cout << "🐶 Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal (copy)
{
    std::cout << "🐶 Copy of Dog "<< copy.type << " called" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
    if (this != &other)
    {   
        Animal::operator=(other);
    }
    std::cout << "🐶 Copy assignment of " << other.type << "called" << std::endl;
    return *this;
}

Dog:: ~Dog()
{
    std::cout << "🐶 Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "૮⍝• ᴥ •⍝ა  WAF!! " << std::endl;  
}
