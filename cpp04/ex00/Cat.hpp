/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 03:34:26 by amiski            #+#    #+#             */
/*   Updated: 2022/11/20 06:34:09 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
#include"Animal.hpp"

class Cat:public Animal
{
    public:
    Cat();
    Cat(const Cat& obj);
    Cat& operator=(const Cat& obj);
    ~Cat();
    void makeSound()const;
};
#endif