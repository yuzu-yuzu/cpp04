#ifndef BRAIN_HPPP
#define BRAIN_HPP
#include <iostream>

#define RESET		"\033[0m"
#define BLACK		"\033[30m"
#define RED			"\033[31m"
#define GREEN		"\033[32m"
#define YELLOW		"\033[33m"
#define BABYBLUE		"\033[38;5;153m"
#define CYAN		"\033[36m"
#define PINK		"\033[38;5;205m"

class Brain
{
    public:
        Brain();
        Brain(const Brain &copy);
        Brain &operator=(const Brain &other);
        virtual ~Brain();

        std::string getIdea(int const &index) const;
        void    setIdea(std::string const &str, int const &index);


    protected:
        std::string ideas[100];
};

#endif