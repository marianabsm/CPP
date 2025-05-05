/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianamestre <marianamestre@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 14:47:04 by marianamest       #+#    #+#             */
/*   Updated: 2025/05/05 15:36:50 by marianamest      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::addValues(const std::string& fn, const std::string& ln, const std::string& nn, const std::string& pn, const std::string& ds)
{
    FirstName = fn;
    LastName = ln;
    NickName = nn;
    PhoneNumber = pn;
    DarkestSecret = ds;
}

void Contact::printLine() const
{
    std::cout << formatField(FirstName) << "|"
              << formatField(LastName) << "|"
              << formatField(NickName) << "|" << std::endl;
}

void Contact::display() const
{
    std::cout << "First Name: " << FirstName << std::endl;
    std::cout << "Last Name: " << LastName << std::endl;
    std::cout << "Nick Name: " << NickName << std::endl;
    std::cout << "Phone Number: " << PhoneNumber << std::endl;
    std::cout << "Darkest Secret: " << DarkestSecret << std::endl;
    std::cout << std::endl;
}

std::string Contact::formatField(const std::string& field) const
{
    if (field.size() > 10)
        return field.substr(0, 9) + ".";
    return field + std::string(10 - field.size(), ' ');
}