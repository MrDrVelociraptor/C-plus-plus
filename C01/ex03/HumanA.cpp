#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &Weapon): name(name), weapnRef(Weapon)
{
    std::cout << name << "is alive" << std::endl;
}