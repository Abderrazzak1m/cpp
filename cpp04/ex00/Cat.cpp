/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 03:37:52 by amiski            #+#    #+#             */
/*   Updated: 2022/11/20 06:34:01 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Cat : default Constructor caled" << std::endl;
}
Cat::~Cat()
{
    std::cout << "Cat : Destructor caled" << std::endl;
}
Cat::Cat(const Cat& obj)
{
    std::cout << "Cat : copy Constructor caled" << std::endl;
    *this = obj;
}

Cat& Cat::operator=(const Cat& obj)
{
     std::cout<< "Cat : Copy assignment operator called" <<std::endl;
    if(this != &obj)
    {
        this->type = obj.type;
    }
    return *this;
}
void Cat::makeSound() const
{
    std::cout<< "mi mi" << std::endl;
}