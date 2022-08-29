/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspeedy <nspeedy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 10:23:34 by nspeedy           #+#    #+#             */
/*   Updated: 2022/08/29 16:53:35 by nspeedy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string	name;
	
	public:
		Zombie(void);
		~Zombie(void);

		void	annouce(void);

		std::string	nameZombie(std::string *input);
};

void	randomChump(std::string name);
Zombie* newZombie(std::string name);




#endif