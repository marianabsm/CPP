/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianamestre <marianamestre@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 14:48:46 by marianamest       #+#    #+#             */
/*   Updated: 2025/05/05 15:39:16 by marianamest      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
    std::string input;
    PhoneBook phoneBook;

    phoneBook.addPhoneBook();
    std::cout << "Entering PhoneBook" << std::endl;

    while (1)
    {
        std::cout << "Choose command: ADD / SEARCH / EXIT" << std::endl;
        std::getline(std::cin, input);

        if (input == "ADD")
            phoneBook.add();
        else if (input == "SEARCH")
            phoneBook.search();
        else if (input == "EXIT")
            break;
        else
            std::cout << "Invalid command. Please try again." << std::endl;
    }

    std::cout << "Exiting PhoneBook" << std::endl;
    return (0);
}
