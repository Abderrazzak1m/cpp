/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 03:07:32 by amiski            #+#    #+#             */
/*   Updated: 2022/11/12 03:07:33 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include <fstream>
int main(int ac, char **av)
{
    if(ac != 4)
    {
        std::cout<<"BAD ERROR"<<std::endl;
        return(0);
    }
    
    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    if( s1.empty())
        return(0);
    std::string str, str2;
    std::ifstream is(filename);
    std::ofstream os(filename.append(".replace"));
    if(!is.is_open() || !os.is_open())
    {
        std::cout<<"ERROR"<<std::endl;
        return (0);
    }

  
    std::getline(is, str, '\0');
    while(str.find(s1, 0) < str.length())
    {
        str2 += str.substr(0,str.find(s1, 0));
        str2 += s2;
        str = str.substr(str.find(s1, 0) + s1.length());
    }
        str2 += str.substr(0,str.length());
    os << str2;
    return 0;
}