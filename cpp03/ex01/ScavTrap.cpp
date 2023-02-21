/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:21:07 by amiski            #+#    #+#             */
/*   Updated: 2022/11/19 23:55:03 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout<< "Default ScavTrap constructor called" <<std::endl;
}
ScavTrap::~ScavTrap()
{
     std::cout<< "ScavTrap Destructor called" <<std::endl;      
}
ScavTrap::ScavTrap(std::string Name):ClapTrap(Name)
{
    std::cout<< "ScavTrap constructor called" <<std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj)
{
    std::cout<< "Copy ScavTrap assignment operator called" <<std::endl;
    this->Name = obj.Name;
    this->Hit_point = obj.Hit_point;
    this->Attack_damage = obj.Attack_damage;
    this->Energy_points = obj.Energy_points;
    return *this;
    
}

ScavTrap::ScavTrap(const ScavTrap& obj):ClapTrap(obj)
{
    std::cout<< "Copy ScavTrap constructor called" <<std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if(this->Hit_point == 0 ||  this->Energy_points == 0)
    {
        std::cout<< "ScavTrap can’t do anything" <<std::endl;
        return ;
    }
    std::cout << "ScavTrap " << this->Name << " attacks " << target << ", causing " << this->Attack_damage << " points of damage!" << std::endl;
    this->Energy_points--;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}