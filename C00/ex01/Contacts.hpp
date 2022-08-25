/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspeedy <nspeedy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 14:20:39 by nspeedy           #+#    #+#             */
/*   Updated: 2022/08/25 15:51:39 by nspeedy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <iostream>
#include <string>

class Contact
{
	private:
			std::string		_FirstName;
			std::string		_LastName;
			std::string		_NickName;
			std::string		_PhoneNumber;
			std::string		_DarkestSecret;

	public:
		void	theFirstName(std::string *input);
		void	theLastName(std::string *input);
		void	theNickName(std::string *input);
		void	thePhoneNumber(std::string *input);
		void	theDarkestSecret(std::string *input);

		std::string theFirstName(void);
		std::string theLastName(void);
		std::string theNickName(void);
		std::string thePhoneNumber(void);
		std::string theDarkestSecret(void);
};

#endif 