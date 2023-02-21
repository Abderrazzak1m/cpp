/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 03:08:56 by amiski            #+#    #+#             */
/*   Updated: 2022/11/12 03:09:10 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<iostream>
#include <new>
class Zombie
{
private:
    std::string name;
public:
    Zombie();
    ~Zombie();
    void announce( void );
    std::string getName();
   void setName(std::string name);
    
};
Zombie* zombieHorde( int N, std::string name );