/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianamestre <marianamestre@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 17:38:26 by marianamest       #+#    #+#             */
/*   Updated: 2025/05/12 19:08:38 by marianamest      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *myZombie = newZombie("myZombie"); 
    myZombie->announce();
    
    randomChump("Nana");

    delete myZombie; // deallocates memory when done
    
    return (0);
}
