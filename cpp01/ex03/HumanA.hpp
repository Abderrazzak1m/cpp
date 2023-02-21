/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 18:36:05 by amiski            #+#    #+#             */
/*   Updated: 2022/11/12 03:10:14 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include"Weapon.hpp"

class HumanA
{
    private:
        Weapon &weapon;
        std::string name;
    public:
        HumanA(std::string name, Weapon &weapon); 
         ~HumanA();
        void attack();
};