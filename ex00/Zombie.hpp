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

void    randomChump( std::string name );
Zombie* newZombie(std::string name);