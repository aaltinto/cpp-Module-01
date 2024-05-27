#include <iostream>

class   Zombie
{
    private:
        std::string name;
    public:
        Zombie();
        ~Zombie();
        void    announce(void);
        bool    setName(std::string name);
        std::string    getName(void);
};

Zombie* zombieHorde( int N, std::string name );