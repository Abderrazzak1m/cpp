/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 03:13:46 by amiski            #+#    #+#             */
/*   Updated: 2022/11/20 06:34:22 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Dog : default Constructor caled" << std::endl;
}
Dog::~Dog()
{
    std::cout << "Dog : Destructor caled" << std::endl;
}
Dog::Dog(const Dog& obj)
{
    std::cout << "Dog : copy Constructor caled" << std::endl;
    *this = obj;
}

Dog& Dog::operator=(const Dog& obj)
{
     std::cout<< "Dog : Copy assignment operator called" <<std::endl;
    if(this != &obj)
    {
        this->type = obj.type;
    }
    return *this;
}
void Dog::makeSound() const
{
    std::cout<< "Haw Haw" << std::endl;
}