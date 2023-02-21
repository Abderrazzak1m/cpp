/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 01:34:39 by amiski            #+#    #+#             */
/*   Updated: 2022/11/20 11:30:11 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#include<iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(const Animal& obj);
        Animal& operator=(const Animal& obj);
        virtual ~Animal();
        std::string getType() const;
        virtual void makeSound() const;
};


#endif