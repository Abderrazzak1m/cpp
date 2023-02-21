/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 09:24:58 by amiski            #+#    #+#             */
/*   Updated: 2022/11/20 10:29:08 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    this->brain = new Brain();
    std::cout << "Cat : default Constructor caled" << std::endl;
}
Cat::~Cat()
{
    std::cout << "Cat : Destructor caled" << std::endl;
    delete this->brain;
}
Cat::Cat(const Cat& obj)
{
    this->brain = new Brain();
    *this = obj;
    std::cout << "Cat : copy Constructor caled" << std::endl;
}

Cat& Cat::operator=(const Cat& obj)
{
     std::cout<< "Cat : Copy assignment operator called" <<std::endl;
    if(this != &obj)
    {
        this->type = obj.type;
        *(this->brain) = *(obj.brain);
    }
    return *this;
}
void Cat::makeSound() const
{
    std::cout<< "mi mi" << std::endl;
}