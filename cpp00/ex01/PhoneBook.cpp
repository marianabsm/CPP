/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianamestre <marianamestre@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 14:48:49 by marianamest       #+#    #+#             */
/*   Updated: 2025/05/05 15:42:58 by marianamest      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::addPhoneBook(void)
{
	int i = 0;
	this->index = 0;
	while (i < 8)
	{
		this->status[i] = false;
		i++;
	}
}

void	PhoneBook::add(void)
{
	int i = 0;
	std::string	tmp[5];

	this->index = this->index % 8;
	this->status[this->index] = true;
	while (i < 5)
	{
		if (i == 0)
			std::cout << "First Name: ";
		if (i == 1)
			std::cout << "Last Name: ";
		if (i == 2)
			std::cout << "Nick Name: ";
		if (i == 3)
			std::cout << "Phone Number: ";
		if (i == 4)
			std::cout << "Darkest Secret: ";
		getline(std::cin, tmp[i]);
		if (tmp[i].empty())
		{
            std::cout << std::endl;
			std::cout << "No empty fields allowed" << std::endl;
            std::cout << std::endl;
			i--;
		}
		i++;
	}
	this->contacts[this->index].addValues(tmp[0], tmp[1], tmp[2], tmp[3], tmp[4]);
	this->index++;
}

void	PhoneBook::search(void)
{
	int i = 0;
	std::string	input;
	char		contact;

	std::cout << "|  Index   |   Name   | LastName | Nickname |" << std::endl;
	while (i < 8)
	{
		if (this->status[i] == false)
			break;
		else
		{
			std::cout << "|" << i+1 << "         |";
			this->contacts[i].printLine();
		}
		i++;
	}
	while (1)
	{
		std::cout << "Select index:" << std::endl;
		getline(std::cin, input);
		if (input.empty() == 0)
			break;
	}
	contact = input[0];

	if (input.size() != 1 || (contact < '0' || contact > '8') || status[contact - 1 - '0'] == false)
    {
        std::cout << std::endl;
		std::cout << "Invalid index value" << std::endl;
        std::cout << std::endl;
    }
	else
		this->contacts[contact - '0' - 1].display();
}