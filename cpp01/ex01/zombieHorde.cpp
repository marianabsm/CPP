/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianamestre <marianamestre@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 19:29:51 by marianamest       #+#    #+#             */
/*   Updated: 2025/05/12 20:23:32 by marianamest      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *zombies = new Zombie[N];

    for (int i = 0; i < N; i++)
        zombies[i].zombieName(name);
    
    return(zombies);
}