/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 09:26:43 by amiski            #+#    #+#             */
/*   Updated: 2022/11/20 10:29:54 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    this->brain = new Brain();
    std::cout << "Dog : default Constructor caled" << std::endl;
}
Dog::~Dog()
{
    std::cout << "Dog : Destructor caled" << std::endl;
    delete this->brain;
}
Dog::Dog(const Dog& obj)
{
    this->brain = new Brain();
    *this = obj;
    std::cout << "Dog : copy Constructor caled" << std::endl;
}

Dog& Dog::operator=(const Dog& obj)
{
     std::cout<< "Dog : Copy assignment operator called" <<std::endl;
    if(this != &obj)
    {
        this->type = obj.type;
        *(this->brain) = *(obj.brain);
    }
    return *this;
}
void Dog::makeSound() const
{
    std::cout<< "Haw Haw" << std::endl;
}