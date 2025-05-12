/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianamestre <marianamestre@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 19:29:58 by marianamest       #+#    #+#             */
/*   Updated: 2025/05/12 20:25:18 by marianamest      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    int amount = 1;

    Zombie *horde = zombieHorde(amount, "nana ");

    for (int i  = 0; i < amount; i++)
        horde[i].announce();

    delete [] horde;
    
    return(0);
}