/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 17:28:03 by amiski            #+#    #+#             */
/*   Updated: 2022/11/24 19:20:09 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"AForm.hpp"
#include"Bureaucrat.hpp"
#include"ShrubberyCreationForm.hpp"
#include"RobotomyRequestForm.hpp"
#include"PresidentialPardonForm.hpp"

int main()
{
        
    Bureaucrat a("amiski", 150);
    ShrubberyCreationForm b("form1");
    a.signForm(b);
    
    
    try
    {
        a.executeForm(b);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    RobotomyRequestForm c("form2");
    a.signForm(c);
    
    try
    {
        a.executeForm(c);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    PresidentialPardonForm d("form2");
    a.signForm(d);
    
    try
    {
        a.executeForm(d);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
   
}