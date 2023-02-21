/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 18:08:32 by amiski            #+#    #+#             */
/*   Updated: 2022/11/24 16:10:30 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"
#include"AForm.hpp"


class RobotomyRequestForm : public AForm
{
       public:
        RobotomyRequestForm(std::string name = "RobotomyRequestForm", int grade_to_sign = 72 , int grade_to_exec = 45);
        RobotomyRequestForm(const RobotomyRequestForm& obj);
        RobotomyRequestForm& operator=(const RobotomyRequestForm & obj);
        ~RobotomyRequestForm();
        void action() const;
};