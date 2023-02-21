/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 20:50:53 by amiski            #+#    #+#             */
/*   Updated: 2022/11/24 16:10:43 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"
#include"AForm.hpp"


class ShrubberyCreationForm : public AForm
{
       public:
        ShrubberyCreationForm(std::string name = "ShrubberyCreationForm", int grade_to_sign = 145 , int grade_to_exec = 137);
        ShrubberyCreationForm(const ShrubberyCreationForm& obj);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm & obj);
        ~ShrubberyCreationForm();
        void action() const;
};