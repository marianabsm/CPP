/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianamestre <marianamestre@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 13:47:17 by marianamest       #+#    #+#             */
/*   Updated: 2025/05/14 13:59:13 by marianamest      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;
    
    std::cout << "memory address of the string variable : " << &string << std::endl;
    std::cout << "memory address held by stringPTR : " << stringPTR << std::endl;
    std::cout << "memory address held by stringREF : " << &stringREF << std::endl;

    std::cout << "value of the string variable : " << string << std::endl;
    std::cout << "value pointed to by stringPTR : " << *stringPTR << std::endl;
    std::cout << "value pointed to by stringREF : " << stringREF << std::endl;

    return (0);
}