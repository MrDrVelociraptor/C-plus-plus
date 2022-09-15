/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspeedy <nspeedy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 13:44:58 by nspeedy           #+#    #+#             */
/*   Updated: 2022/08/29 16:51:38 by nspeedy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main(void)
{
	std::string name1;
	std::string name2;

	
	std::cout << "Give your name Zombie friend and its sidekick names" << std::endl; 
	std::cin >> name1 >> name2;
	Zombie *zom = newZombie(name1);
	zom->annouce();
	name1.clear();
	randomChump(name2);
	name2.clear();
	delete(zom);


	
	return (0);
}
