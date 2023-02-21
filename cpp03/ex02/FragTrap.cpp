/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 08:55:24 by amiski            #+#    #+#             */
/*   Updated: 2022/11/19 23:53:28 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout<< "Default FragTrap constructor called" <<std::endl;
}
FragTrap::~FragTrap()
{
     std::cout<< "FragTrap Destructor called" <<std::endl;        
}
FragTrap::FragTrap(std::string Name):ClapTrap(Name)
{
    std::cout<< "FragTrap constructor called" <<std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& obj)
{
    std::cout<< "Copy FragTrap assignment operator called" <<std::endl;
    this->Name = obj.Name;
    this->Hit_point = obj.Hit_point;
    this->Attack_damage = obj.Attack_damage;
    this->Energy_points = obj.Energy_points;
    return *this;
    
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap high five" << std::endl;
}
