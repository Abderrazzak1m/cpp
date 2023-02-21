/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 02:15:05 by amiski            #+#    #+#             */
/*   Updated: 2022/11/12 01:08:01 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<iostream>

class Harl
{
    public:
       void debug( void );
       void info( void );
       void warning( void );
       void error( void );
       void complain(std::string level);
};