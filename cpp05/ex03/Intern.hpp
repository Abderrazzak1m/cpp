/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 17:06:58 by amiski            #+#    #+#             */
/*   Updated: 2022/11/24 17:33:08 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
#include"AForm.hpp"
#include"Bureaucrat.hpp"
#include"ShrubberyCreationForm.hpp"
#include"RobotomyRequestForm.hpp"
#include"PresidentialPardonForm.hpp"

class Intern
{
    public:
        Intern();
        Intern(const Intern& obj);
        Intern& operator=(const Intern& obj);
        ~Intern();
        AForm   *makeForm(std::string name, std::string target);
};

#endif