/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 09:38:08 by amiski            #+#    #+#             */
/*   Updated: 2022/11/20 12:33:53 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"
#include"Cat.hpp"

int main()
{
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

    std::cout << "--------------------------------------" << std::endl;
    
    Cat cat1;
    Cat cat2(cat1);
    Dog dog1;
    Dog dog2(dog1);
    

    cat1 = cat2;
    dog1 = dog2;

    std::cout << "cat1: " << cat1.getBrain() << std::endl;
    std::cout << "cat2: " << cat2.getBrain() << std::endl;
    std::cout << "dog1: " << dog1.getBrain() << std::endl;
    std::cout << "dog2: " << dog2.getBrain() << std::endl;

    return 0;
}