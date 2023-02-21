/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 04:55:33 by amiski            #+#    #+#             */
/*   Updated: 2022/11/26 15:05:20 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include<iostream>

template <typename T> 
void iter(T *arry, unsigned int n, void(*func)(T &e)) 
{
    for(unsigned int i = 0; i < n; i++)
        func(arry[i]);
}
#endif