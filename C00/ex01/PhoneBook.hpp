/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspeedy <nspeedy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 13:48:55 by nspeedy           #+#    #+#             */
/*   Updated: 2022/08/25 15:08:24 by nspeedy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include "Contacts.hpp"

class PhoneBook
{
	private:
		Contact _contacts[8];

	public:
		void	prompt(void);
		void	add(void);
		void	search(void);
};

#endif 