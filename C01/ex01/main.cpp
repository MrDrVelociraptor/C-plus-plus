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

	
	std::cout << "Give your name Zombie hivemind a name" << std::endl; 
	std::cin >> name1;
	Zombie *zom = zombieHorde(12, name1);
	delete [] zom;

	return (0);
}
