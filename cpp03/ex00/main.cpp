/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 13:52:46 by amiski            #+#    #+#             */
/*   Updated: 2022/11/20 00:13:14 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"
static void Attack_a(ClapTrap &a, ClapTrap &b)
{
    a.attack("b");
    b.takeDamage(1);
}
int main()
{
    ClapTrap a("a");
    ClapTrap b("b");
    Attack_a(a, b);
    b.takeDamage(9);
    b.beRepaired(1);
   
  
    return(0);
}