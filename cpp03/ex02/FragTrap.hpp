/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 08:55:27 by amiski            #+#    #+#             */
/*   Updated: 2022/11/19 23:50:50 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include"ClapTrap.hpp"

class FragTrap:public ClapTrap 
{
    public:
        FragTrap();
        FragTrap(std::string Name);
        FragTrap(const FragTrap& obj);
        FragTrap& operator=(const FragTrap& obj);
        ~FragTrap();
        void highFivesGuys(void);
};
#endif