/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 21:39:31 by amiski            #+#    #+#             */
/*   Updated: 2022/11/24 19:06:55 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"

int main()
{
    
    try
    {
        Bureaucrat a("hss", 150);
        std::cout << a << std::endl;
        Bureaucrat b("hss", 151);
        std::cout << b << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
    
    try
    {
        Bureaucrat a("hjdgf", 150);
        std::cout << a << std::endl;
        a.decrGrade();
        std::cout << a << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
    // try
    // {
    //     Bureaucrat b("kslfj", 151);
    // }
    // catch(const std::exception& e)
    // {
    //     std::cout << e.what() << '\n';
    // }
}

    