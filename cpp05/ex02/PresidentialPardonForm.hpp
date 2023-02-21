/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 20:58:18 by amiski            #+#    #+#             */
/*   Updated: 2022/11/24 16:34:35 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"
#include"AForm.hpp"


class PresidentialPardonForm : public AForm
{
       public:
        PresidentialPardonForm(std::string name = "PresidentialPardonForm", int grade_to_sign = 25 , int grade_to_exec = 5);
        PresidentialPardonForm(const PresidentialPardonForm& obj);
        PresidentialPardonForm& operator=(const PresidentialPardonForm & obj);
        ~PresidentialPardonForm();
        void action() const;
};