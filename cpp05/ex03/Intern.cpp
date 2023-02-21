/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 17:12:18 by amiski            #+#    #+#             */
/*   Updated: 2022/11/24 17:37:47 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Intern.hpp"

Intern::Intern()
{
    
}
Intern::Intern(const Intern& obj)
{
    (void)obj;
}

Intern& Intern::operator=(const Intern& obj)
{
    (void)obj;
    return(*this);
}
Intern::~Intern()
{
    
}

AForm *Intern::makeForm(std::string name, std::string target)
{
    std::string forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    for(int i =0 ; i < 3; i++)
    {
        if(forms[i] == name)
        {
            std::cout << "Intern creates " << name << std::endl;
            switch (i)
            {
            case 0:
                return(new ShrubberyCreationForm(target));
            case 1:
                return(new RobotomyRequestForm(target));
            case 2:
                return(new PresidentialPardonForm(target));
            }
        }
    }
    std::cout << "Intern don't creates this Form " << std::endl;
    return(NULL);
}