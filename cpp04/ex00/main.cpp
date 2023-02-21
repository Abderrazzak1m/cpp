/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 01:34:42 by amiski            #+#    #+#             */
/*   Updated: 2022/11/20 12:12:31 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    
    delete i;
    delete j;
    delete meta;

    std::cout << "------------------------------" << std::endl;
    /*----------------------------------------------------------------*/
    const WrongAnimal* b = new WrongAnimal();
    const WrongAnimal* c = new WrongCat();
    std::cout << c->getType() << " " << std::endl;
    std::cout << b->getType() << " " << std::endl;
    
    c->makeSound();
    b->makeSound();
    delete b;
    delete c;
    return 0;

}