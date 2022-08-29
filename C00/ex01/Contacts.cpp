/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nspeedy <nspeedy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 14:03:10 by nspeedy           #+#    #+#             */
/*   Updated: 2022/08/26 14:14:42 by nspeedy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Contact fields are: First name, Last name, nickname, phone number, darkest secret

#include "Contacts.hpp"

//Prototypes of the functions in the Contact class

std::string Contact::theFirstName() { return (_FirstName); }

std::string Contact::theLastName() { return (_LastName); }

std::string Contact::theNickName() { return (_NickName); }

std::string Contact::thePhoneNumber() { return (_PhoneNumber); }

std::string Contact::theDarkestSecret() { return (_DarkestSecret); }

/* The functions below set the data for each contact added - 
	first clearing anything in the class string storing the input - 
	then the while loop makes sure that there is an input so no field can be empty -
	then asks user for an input which is captured by getline and stored in the string - 
	then clearing the input variable */

void	Contact::theFirstName(std::string *input)
{
	_FirstName.clear();
	while(_FirstName.empty())
	{
		std::cout << "Your first name is required: ";
		getline(std::cin, *input);
		_FirstName = *input;
		input->clear();
	}
}

void	Contact::theLastName(std::string *input)
{
	_LastName.clear();
	while(_LastName.empty())
	{
		std::cout << "Your last name is also required: ";
		getline(std::cin, *input);
		_LastName = *input;
		input->clear();
	}
}

void	Contact::theNickName(std::string *input)
{
	_NickName.clear();
	while(_NickName.empty())
	{
		std::cout << "And your nickname is: ";
		getline(std::cin, *input);
		_NickName = *input;
		input->clear();
	}
}

void	Contact::thePhoneNumber(std::string *input)
{
	_PhoneNumber.clear();
	while(_PhoneNumber.empty())
	{
		std::cout << "What are your digits bae: ";
		getline(std::cin, *input);
		_PhoneNumber = *input;
		input->clear();
	}
}

void	Contact::theDarkestSecret(std::string *input)
{
	_DarkestSecret.clear();
	while(_DarkestSecret.empty())
	{
		std::cout << "I don't understand why a phonebook needs a secret but: ";
		getline(std::cin, *input);
		_DarkestSecret = *input;
		input->clear();
	}
}