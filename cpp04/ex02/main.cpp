/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 09:38:08 by amiski            #+#    #+#             */
/*   Updated: 2022/11/20 12:35:29 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"
#include"Cat.hpp"

int main()
{
    // Animal *a = new Animal();
    Animal *animals[80];
    for(int i = 0; i < 80; i++)
    {
        if(i < 40)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }
    for(int i = 0; i < 80; i++)
        delete animals[i];
    return 0;
}