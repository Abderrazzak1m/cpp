/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 17:28:03 by amiski            #+#    #+#             */
/*   Updated: 2022/11/24 17:50:24 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"AForm.hpp"
#include"Bureaucrat.hpp"
#include"Intern.hpp"

int main()
{
    Intern r;
    Bureaucrat a("x", 5);
    AForm *form0 ;
    AForm *form1 ;
    AForm *form2 ;
    AForm *form3 ;
    form0 = r.makeForm("robotomy request", "Bender");
    std:: cout << form0->getName() << std::endl;
    try
    {
        a.signForm(*form0);
        a.executeForm(*form0);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    form1 = r.makeForm("shrubbery creation", "shrubbery");
    try
    {
        a.signForm(*form1);
        a.executeForm(*form1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    form2 = r.makeForm("presidential pardon", "presidential");
     try
    {
        a.signForm(*form2);
        a.executeForm(*form2);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    form3  = r.makeForm("tkharbi9a", "lm3lem");
    delete form0;
    delete form1;
    delete form2;
    delete form3;
    // system("leaks ex03");
}