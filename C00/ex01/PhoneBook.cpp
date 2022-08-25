/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspeedy <nspeedy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 13:48:43 by nspeedy           #+#    #+#             */
/*   Updated: 2022/08/25 16:46:34 by nspeedy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::prompt()
{
	std::cout << "/******************************************/\n\t\tMENU OPTIONS" << std::endl;
	std::cout << "\t\t-\tADD\n\t\t-\tSEARCH\n\t\t-\tEXIT" << std::endl;
	std::cout << "/******************************************/" << std::endl;
}

void	PhoneBook::add()
{
	static int	i;
	std::string	input;

	if (i == 8)
	std::cout << "/******************************************/" << std::endl;
	_contacts[i].theFirstName(&input);
	_contacts[i].theLastName(&input);
	_contacts[i].theNickName(&input);
	_contacts[i].thePhoneNumber(&input);
	_contacts[i].theDarkestSecret(&input);
	i++;
}

const std::string	EntryLength(std::string str) 
{
	if (str.length() > 9)
		str = str.substr(0,9).append(".");
	return (str);
}

void	PhoneBook::search()
{
	int			i = -1, j = 0;
	std::string	input;
	std::cout << "/******************************************/" << std::endl;
	for (int k = 0; k < 8 && _contacts[k].theFirstName().empty() == false; k++)
	{
		std::cout << std::right << std::setw(10) << k + 1 << "|";
		std::cout << std::right << std::setw(10) << EntryLength(_contacts[k].theFirstName()) << "|";
		std::cout << std::right << std::setw(10) << EntryLength(_contacts[k].theLastName()) << "|";
		std::cout << std::right << std::setw(10) << EntryLength(_contacts[k].theNickName());
		std::cout << std::endl;
		j++;
	}
	if (j == 0)
		return ;
	std::cout << "/******************************************/" << std::endl;
	while (i == -1)
	{
		std::cout << "Enter index number: ";
		getline(std::cin, input);
		i = atoi(input.c_str());
		if (i <= j && i >= 1)
		{
			std::cout << "/******************************************/" << std::endl;
			std::cout << "First Name:\t" << _contacts[i - 1].theFirstName() << std::endl;
			std::cout << "Last Name:\t" << _contacts[i - 1].theLastName() << std::endl;
			std::cout << "Nick Name:\t" << _contacts[i - 1].theNickName() << std::endl;
			std::cout << "Phonenumber:\t" << _contacts[i - 1].thePhoneNumber() << std::endl;
			std::cout << "Darkest Secret:\t" << _contacts[i - 1].theDarkestSecret() << std::endl;
			break ;
		}
		std::cout << "Index not in existance" << std::endl;
		i = -1;
	}
}

int main()
{
	PhoneBook	PhoneBook;
	std::string	input;

	while (input.compare("EXIT") != 0)
	{
		PhoneBook.prompt();
		getline(std::cin, input);
		if (input.compare("ADD") == 0)
			PhoneBook.add();
		else if (input.compare("SEARCH") == 0)
			PhoneBook.search();
	}
	return (0);
}