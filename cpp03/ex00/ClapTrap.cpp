/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 13:52:42 by amiski            #+#    #+#             */
/*   Updated: 2022/11/20 00:02:32 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout<< "Default constructor called" <<std::endl;
    this->Hit_point = 10;
    this->Energy_points = 10;
    this->Attack_damage = 0;
    this->Name = "default";
}
ClapTrap::ClapTrap(std::string Name)
{
    std::cout<< "Constructor called" <<std::endl;
    this->Name = Name;
     this->Hit_point = 10;
    this->Energy_points = 10;
    this->Attack_damage = 0;
}

ClapTrap::~ClapTrap()
{
    std::cout<< "Destructor called" <<std::endl;   
}

ClapTrap::ClapTrap(const ClapTrap& obj)
{
    std::cout<< "Copy constructor called" <<std::endl;
    
    *this = obj;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& obj)
{
    std::cout<< "Copy assignment operator called" <<std::endl;
    this->Name = obj.Name;
    this->Hit_point = obj.Hit_point;
    this->Energy_points = obj.Energy_points;
    this->Attack_damage = obj.Attack_damage;
    return *this;
}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
void ClapTrap::attack(const std::string& target)
{
    if(this->Hit_point == 0 ||  this->Energy_points == 0)
    {
        std::cout<< "ClapTrap can’t do anything" <<std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->Name << " attacks " << target << ", causing " << this->Attack_damage << " points of damage!" << std::endl;
    this->Energy_points--;
}

void ClapTrap::beRepaired(unsigned int amount)
{
     if(this->Hit_point == 0 ||  this->Energy_points == 0)
    {
        std::cout<< "ClapTrap can’t do anything" <<std::endl;
        return ;
    }
    this->Hit_point += amount;
    std::cout << "ClapTrap " << this->Name <<" repairs itself, it gets " << amount << " hit points back." << std::endl;
    this->Energy_points--;
}
void ClapTrap::takeDamage(unsigned int amount)
{
     if(this->Hit_point == 0 ||  this->Energy_points == 0)
    {
        std::cout<< "ClapTrap can’t do anything" <<std::endl;
        return ;
    }
    if(this->Hit_point < amount)
        this->Hit_point = 0;
    else
        this->Hit_point -= amount;
    std::cout << "ClapTrap " << this->Name << " takes " << amount << " points of damage!" << std::endl;
}