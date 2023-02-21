/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 21:33:19 by amiski            #+#    #+#             */
/*   Updated: 2022/11/28 07:05:31 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
#include<iostream>
#include<vector>

template <typename T>
void easyfind(T &a, int b)
{
   typename T::iterator it;
    it = std::find(a.begin(), a.end(), b);
    if(it != a.end())
    {
        std::cout << "Element " << *it <<" found at position : " << it - a.begin() << std::endl ;
    }
    else
        std::cout << "Element not found." << std::endl;
}

#endif