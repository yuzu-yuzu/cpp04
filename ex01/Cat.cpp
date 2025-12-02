#include"Cat.hpp"

Cat::Cat() : Animal("🐱 Cat")
{
    this->type = "🐱 Cat";// est ce utile ?
    this->brain = new Brain();
    std::cout << "🐱 Cat constructor called" << std::endl;
}

Cat::Cat(std::string type) : Animal(type)
{
    this->brain = new Brain();
    std::cout << "🐱 Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
    this->brain = new Brain(coppy.brain);
    std::cout << "🐱 Copy of Cat "<< copy.type << " called" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
    if (this != &other)
    {   
        *this->brain = *other->brain // pk * ?
        Animal::operator=(other);
    }
    std::cout << "🐱 Copy assignment of " << other.type << "called" << std::endl;
    return *this;
}

Cat:: ~Cat()
{
    delete this->brain;
    std::cout << "🐱 Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "ᓚ₍ ^. ̫ .^₎ Meow." << std::endl;  
}

Brain &Cat::getbrain() const
{
    returb(*this->brain);
}

void Cat::setbrain(Brain const &brain)
{
    *this->brain = brain;
}
