/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 04:45:17 by amiski            #+#    #+#             */
/*   Updated: 2022/11/27 18:22:12 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename T> void swap(T& t1, T& t2)
{
    T tmp;

    tmp = t1;
    t1 = t2;
    t2 = tmp;
}

template <typename T> T min(T t1, T t2)
{
    if(t1 < t2)
        return(t1);
    return(t2);
}

template <typename T> T max(T t1, T t2)
{
    if(t1 > t2)
        return(t1);
    return(t2);
}

#endif