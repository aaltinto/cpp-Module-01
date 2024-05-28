#include <iostream>

int main(void)
{
    std::string brain;
    brain = "HI THIS IS BRAIN";
    
    std::string &ref = brain;
    std::string *ptr = &brain;

    std::cout << "\033[31m" << "memory addresses:" << "\033[0m" << std::endl;
    std::cout << "string: " << &brain << std::endl;
    std::cout << "ptr   : " << &ptr << std::endl;
    std::cout << "ref   : " << &ref << std::endl;
    std::cout << "\033[31m" << "value of strings:" << "\033[0m" << std::endl;
    std::cout << brain << std::endl;
    std::cout << *ptr << std::endl;
    std::cout << ref << std::endl;

}