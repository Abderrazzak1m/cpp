/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 08:55:21 by amiski            #+#    #+#             */
/*   Updated: 2022/11/19 23:50:33 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include<iostream>
class ClapTrap
{
    protected:
        std::string Name;
        unsigned int Hit_point;
        unsigned int Energy_points;
        unsigned int Attack_damage;
    public:
        ClapTrap();
        ~ClapTrap();
       ClapTrap(const ClapTrap& obj);
       ClapTrap& operator=(const ClapTrap& obj);
        ClapTrap(std::string Name);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif

