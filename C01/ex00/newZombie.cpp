/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspeedy <nspeedy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 15:36:39 by nspeedy           #+#    #+#             */
/*   Updated: 2022/08/29 16:38:43 by nspeedy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"



Zombie* newZombie(std::string name)
{
	Zombie	*babyZombie = new Zombie(name);
	return (babyZombie);
}