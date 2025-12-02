#ifndef CAT_HPP
#define CAT_HPP
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(std::string type);
        Cat(const Cat &copy);
        Cat &operator=(const Cat &other);
        virtual ~Cat();

        void makeSound() const;
        Brain &getbrain() const;
        void setbrain(Brain const &brain); // faut il settype ?

    private:
        Brain *brain;
};

#endif