/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 20:29:11 by amiski            #+#    #+#             */
/*   Updated: 2022/11/24 19:15:10 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"
#include"Form.hpp"

int main()
{
    Bureaucrat a("dgfgdf", 8);
    Form b("f", 7, 18);
    Form c("f", 100, 18);
    try
    {
        a.signForm(c);
        b.beSigned(a);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}