/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 21:29:47 by amiski            #+#    #+#             */
/*   Updated: 2022/11/10 01:39:31 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
    std::cout << this->name << " Zombies destroyed !" << std::endl; 
}
void Zombie::announce()
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::getName()
{
    return (this->name);
}

void Zombie::setName(std::string name)
{
    this->name = name;
}

Zombie* newZombie( std::string name )
{
    Zombie *a = new Zombie();
    a->setName(name);
    return (a);
}

void randomChump( std::string name )
{
    Zombie a;
    a.setName(name);
    a.announce();
}