/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianamestre <marianamestre@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 14:15:42 by marianamest       #+#    #+#             */
/*   Updated: 2025/05/05 14:33:09 by marianamest      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> // in / out stream library (cout, etc ...)

int main(int ac, char **av)
{
	int i = 1;
	int j = 0;
	
	if (ac > 1)
    {
        while (i < ac)
        {
			j = 0;
            while (av[i][j])
			{
				std::cout << (char)toupper(av[i][j]);
				j++;
			}
            if(i < ac - 1)
                std::cout << " ";
			i++;
        }
        std::cout << std::endl;
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}