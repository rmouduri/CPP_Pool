#include <iostream>

#ifndef __ZOMBIE_HPP__
# define __ZOMBIE_HPP__

class Zombie
{
private:
    std::string _name;

public:
    Zombie(std::string name);
    ~Zombie();

    void announce() const;
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif // __ZOMBIE_HPP__