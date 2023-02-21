/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 18:17:10 by amiski            #+#    #+#             */
/*   Updated: 2022/11/10 21:21:01 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include<iostream>

class Weapon
{
    private:
        std::string type;
    public:
        Weapon(std::string type);
        std::string getType();
        void setType(std::string type);
};