#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon      *weapn;
        
    public:
        HumanA(std::string name, Weapon &weepan);
        ~HumanA(void);

        void    attack();
		void	setWeapon(Weapon &weepan);

};

#endif