/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 03:09:19 by amiski            #+#    #+#             */
/*   Updated: 2022/11/12 03:09:20 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

Zombie *zombieHorde( int N, std::string name )
{
    Zombie *z = new Zombie[N];
    int i = -1;
    while(++i < N)
        z[i].setName(name);
    return(z);
}