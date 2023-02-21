/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 18:27:36 by amiski            #+#    #+#             */
/*   Updated: 2022/11/10 21:15:45 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Weapon.hpp"

void Weapon::setType(std::string type)
{
    this->type = type;
}

std::string Weapon::getType()
{
    return(this->type);
}
Weapon::Weapon(std::string type)
{
     this->type = type;
}