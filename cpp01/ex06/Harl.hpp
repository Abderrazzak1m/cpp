/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 01:43:41 by amiski            #+#    #+#             */
/*   Updated: 2022/11/12 01:46:36 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<iostream>
#include<string>

class Harl
{
    public:
       void debug( void );
       void info( void );
       void warning( void );
       void error( void );
       void complain(std::string level);
};