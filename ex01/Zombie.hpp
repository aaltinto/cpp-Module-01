#include <iostream>

class   Zombie
{
    private:
        std::string name;
    public:
        Zombie(std::string name);
        Zombie(void);
        ~Zombie();
        void    announce(void) const;
        bool    setName(std::string name);
        std::string    getName(void) const;
};

Zombie* zombieHorde( int N, std::string name );