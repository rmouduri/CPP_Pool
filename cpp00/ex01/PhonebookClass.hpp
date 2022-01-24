#ifndef PHONEBOOKCLASS_HPP
# define PHONEBOOKCLASS_HPP

#include "ContactClass.hpp"

class PhonebookClass
{
public:
    Contact contacts[8];

    PhonebookClass();
    ~PhonebookClass();
};

#endif //PHONEBOOKCLASS_HPP