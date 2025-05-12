/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianamestre <marianamestre@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 20:20:18 by marianamest       #+#    #+#             */
/*   Updated: 2025/05/12 20:24:04 by marianamest      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIES_HPP
#define ZOMBIES_HPP

#include <iostream>
#include <string>

class Zombie
{
    private:
        std :: string _name;

    public:
    Zombie();
    ~Zombie();
    void announce();
	void zombieName(std :: string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif