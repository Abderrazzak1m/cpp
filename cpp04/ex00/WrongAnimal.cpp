/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 08:41:46 by amiski            #+#    #+#             */
/*   Updated: 2022/11/20 12:13:30 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->type = "WrongAnimal";
    std::cout<< "WrongAnimal : Default constructor called" << std::endl;
}
WrongAnimal::~WrongAnimal()
{
    std::cout<< "WrongAnimal : destructor called" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal& obj)
{
    std::cout<< "WrongAnimal : copy constructor called" << std::endl;
    *this = obj;
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj)
{
    std::cout<< "WrongAnimal : Copy assignment operator called" <<std::endl;
    if(this != &obj)
        this->type = obj.type;
    return *this ;
}

void WrongAnimal::makeSound() const
{
    std::cout << "The WrongAnimal makes a sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return(this->type);
}