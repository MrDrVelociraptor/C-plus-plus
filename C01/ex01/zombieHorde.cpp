#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    int i = 0;

    Zombie	*allZombies = new Zombie[N];
    while (i < N)
    {
        allZombies[i].hordeName(name);
        allZombies[i].annouce();
        i++;
    }
    return (allZombies);
}