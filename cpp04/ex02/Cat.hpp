/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 09:25:45 by amiski            #+#    #+#             */
/*   Updated: 2022/11/20 11:55:36 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
#include"Animal.hpp"
#include"Brain.hpp"

class Cat:public Animal
{
    private:
        Brain *brain;
    public:
    Cat();
    Cat(const Cat& obj);
    Cat& operator=(const Cat& obj);
    ~Cat();
    void makeSound()const;
};
#endif