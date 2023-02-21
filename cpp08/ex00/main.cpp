/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 21:52:03 by amiski            #+#    #+#             */
/*   Updated: 2022/11/28 07:06:30 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
        std::vector<int> vec;    
        vec.push_back(1);   
        vec.push_back(5);   
        vec.push_back(3);  
        vec.push_back(4);   
        vec.push_back(5);  
        vec.push_back(6);   
        vec.push_back(7);   
        vec.push_back(8);  
        vec.push_back(9);   
        vec.push_back(101);  

    easyfind(vec, 9);
    easyfind(vec, 102);
}