/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 10:30:17 by amiski            #+#    #+#             */
/*   Updated: 2022/11/18 19:55:35 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"FragTrap.hpp"

int main()
{
   FragTrap a("X");
   a.attack("Y");
   a.highFivesGuys();
   a.takeDamage(100);
   a.highFivesGuys();
}