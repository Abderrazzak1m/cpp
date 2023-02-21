/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 01:34:36 by amiski            #+#    #+#             */
/*   Updated: 2022/11/20 08:37:49 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"

Animal::Animal()
{
    this->type = "";
    std::cout<< "Animal : Default constructor called" << std::endl;
}
Animal::~Animal()
{
    std::cout<< "Animal : destructor called" << std::endl;
}
Animal::Animal(const Animal& obj)
{
    std::cout<< "Animal : copy constructor called" << std::endl;
    *this = obj;
}
Animal& Animal::operator=(const Animal& obj)
{
    std::cout<< "Animal : Copy assignment operator called" <<std::endl;
    if(this != &obj)
        this->type = obj.type;
    return *this ;
}

void Animal::makeSound() const
{
    std::cout << "The animal makes a sound" << std::endl;
}

std::string Animal::getType() const
{
    return(this->type);
}