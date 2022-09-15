#include "Weapon.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon      &weapnRef;
        
    public:
        HumanA(std::string name, Weapon &Weapon);
        ~HumanA(void);

        void    attack(void);

};