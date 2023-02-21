/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 18:13:12 by amiski            #+#    #+#             */
/*   Updated: 2022/11/24 19:17:11 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string name, int grade_to_sign, int grade_to_exec) :AForm(name, grade_to_sign, grade_to_exec)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj)
{
    if(this != &obj)
        *this = obj;
}
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& obj)
{
    if(this != &obj)
        this->is_signed = obj.is_signed;
    return(*this);
}

void RobotomyRequestForm::action() const
{
    if(time(NULL) % 2 == 0)
        std::cout << this->getName() << " has been robotomized successfully  " << std::endl;
    else
        std::cout << this->getName() << " has been robotomized failed  " << std::endl;     
}