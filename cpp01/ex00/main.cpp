/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 21:32:20 by amiski            #+#    #+#             */
/*   Updated: 2022/11/12 03:18:35 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

int main()
{
    Zombie a;
    Zombie *b;
    
    a.setName("Foo");
    a.announce();
    
    b = newZombie("amiski");
    b->announce();
    delete b;
    
    randomChump("fff");

}