/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 08:45:45 by amiski            #+#    #+#             */
/*   Updated: 2022/11/20 08:47:07 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
#include"WrongAnimal.hpp"

class WrongCat:public WrongAnimal
{
    public:
    WrongCat();
    WrongCat(const WrongCat& obj);
    WrongCat& operator=(const WrongCat& obj);
    ~WrongCat();
    void makeSound()const;
};
#endif