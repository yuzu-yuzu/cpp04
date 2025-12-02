#ifndef DOG_HPP
#define DOG_HPP
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(std::string type);
        Dog(const Dog &copy);
        Dog &operator=(const Dog &other);
        virtual ~Dog();

        void makeSound() const;
        Brain &getbrain() const;
        void setbrain(Brain const &brain); // faut il settype ?
    
    private:
        Brain *brain;
};

#endif