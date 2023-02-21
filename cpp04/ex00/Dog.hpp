/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 03:09:38 by amiski            #+#    #+#             */
/*   Updated: 2022/11/20 06:34:29 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
#include"Animal.hpp"

class Dog:public Animal
{
    public:
        Dog();  
        Dog(const Dog& obj);
        Dog& operator=(const Dog& obj); 
        ~Dog(); 
        void makeSound() const;
};

#endif