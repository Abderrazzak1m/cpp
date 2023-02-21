/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 09:27:11 by amiski            #+#    #+#             */
/*   Updated: 2022/11/20 12:28:32 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
#include"Animal.hpp"
#include"Brain.hpp"

class Dog:public Animal
{
    private:
        Brain *brain;
    public:
        Dog();  
        Dog(const Dog& obj);
        Dog& operator=(const Dog& obj); 
        ~Dog();
        Brain *getBrain(void);
        void makeSound() const;
};

#endif