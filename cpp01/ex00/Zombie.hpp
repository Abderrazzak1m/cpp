/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 21:28:33 by amiski            #+#    #+#             */
/*   Updated: 2022/11/10 01:27:55 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include <new>
class Zombie
{
private:
    std::string name;
public:
    Zombie();
    ~Zombie();
    void announce( void );
    std::string getName();
   void setName(std::string name);
    
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );