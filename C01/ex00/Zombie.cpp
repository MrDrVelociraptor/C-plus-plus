/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspeedy <nspeedy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 10:30:05 by nspeedy           #+#    #+#             */
/*   Updated: 2022/08/29 16:55:28 by nspeedy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie(void)
{
	return ;
}

Zombie::~Zombie()
{
	std::cout << this->name << " of the undead zombie legions has been put to rest" << std::endl;
}

void	Zombie::annouce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::nameZombie(std::string *input)
{
	getline(std::cin, *input);

}