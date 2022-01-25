#include <iostream>

#ifndef __ZOMBIE_HPP__
# define __ZOMBIE_HPP__

class Zombie
{
private:
    std::string _name;

public:
    Zombie();
    ~Zombie();

    void announce() const;
    void setZombieName(std::string);
};

Zombie *zombieHorde(int N, std::string name);

#endif // __ZOMBIE_HPP__