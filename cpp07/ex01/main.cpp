/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 05:01:41 by amiski            #+#    #+#             */
/*   Updated: 2022/11/27 18:25:19 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"iter.hpp"
void function(int& t)
{
    t += 5;
}

int main()
{
    int arry[5] = {0, 1, 2, 3 , 4};
    ::iter(arry, 5, function);

    for(int i =0; i < 5; i ++)
        std::cout<< arry[i] << std::endl;
}