#ifndef __HUMANA_HPP__
# define __HUMANA_HPP__

# include "Weapon.hpp"

class HumanA
{
private:
    Weapon _weapon;
    std::string _name;

public:
    HumanA(std::string name, Weapon type);
    ~HumanA();

    void attack() const;
};

#endif //__HUMANA_HPP__