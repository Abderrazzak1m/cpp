/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 08:47:33 by amiski            #+#    #+#             */
/*   Updated: 2022/11/20 08:49:31 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongCat";
    std::cout << "WrongCat : default Constructor caled" << std::endl;
}
WrongCat::~WrongCat()
{
    std::cout << "WrongCat : Destructor caled" << std::endl;
}
WrongCat::WrongCat(const WrongCat& obj)
{
    std::cout << "WrongCat : copy Constructor caled" << std::endl;
    *this = obj;
}

WrongCat& WrongCat::operator=(const WrongCat& obj)
{
     std::cout<< "WrongCat : Copy assignment operator called" <<std::endl;
    if(this != &obj)
    {
        this->type = obj.type;
    }
    return *this;
}
void WrongCat::makeSound() const
{
    std::cout<< "mi mi" << std::endl;
}