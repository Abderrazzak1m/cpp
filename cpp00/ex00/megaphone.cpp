/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:29:23 by amiski            #+#    #+#             */
/*   Updated: 2022/11/09 15:49:56 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    int i = 0;
    int j;
    char c;
    if(ac == 1)
        std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    while(av[++i])
    {
        j = -1;
        while(av[i][++j])
        {
            c = toupper(av[i][j]);
            std::cout<< c;
        }
        if(av[i + 1])
            std::cout<<" ";
    }
    std::cout<< std::endl;
    return(0);
}