/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 09:13:05 by amiski            #+#    #+#             */
/*   Updated: 2022/11/20 10:23:51 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain : default Constructor caled" << std::endl;
}
Brain::Brain(const Brain& obj)
{
    std::cout << "copy : default Constructor caled" << std::endl;
    *this = obj;
}
Brain& Brain::operator=(const Brain& obj)
{
    std::cout << "Brain : Copy assignment operator called" <<std::endl;
    if(this != &obj)
    {
        for(int i = 0; i < 100; i++)
            this->ideas[i] = obj.ideas[i];
    }
    return *this;
}
Brain::~Brain()
{
    std::cout << "Brain : Destructor caled" << std::endl;
}

