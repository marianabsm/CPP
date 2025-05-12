/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianamestre <marianamestre@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 17:38:23 by marianamest       #+#    #+#             */
/*   Updated: 2025/05/12 19:07:35 by marianamest      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
private:
    std::string _name;
    
public:
    Zombie(std::string name);
    ~Zombie();
    void announce();
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif