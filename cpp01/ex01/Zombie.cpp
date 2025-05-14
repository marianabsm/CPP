/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianamestre <marianamestre@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 19:29:56 by marianamest       #+#    #+#             */
/*   Updated: 2025/05/13 14:36:49 by marianamest      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie :: Zombie() // defines constructor
{
    
}

Zombie :: ~Zombie() // defines destructor
{
    std :: cout << _name << "died" << std :: endl;
}

void Zombie :: announce(void)
{
    std :: cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::zombieName(std :: string name)
{
    this->_name = name;
}
 