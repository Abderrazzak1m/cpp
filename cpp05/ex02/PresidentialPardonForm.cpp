/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 20:58:14 by amiski            #+#    #+#             */
/*   Updated: 2022/11/24 16:09:58 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string name, int grade_to_sign, int grade_to_exec) :AForm(name, grade_to_sign, grade_to_exec)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj)
{
    if(this != &obj)
        *this = obj;
}
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& obj)
{
    if(this != &obj)
        this->is_signed = obj.is_signed;
    return(*this);
}

void PresidentialPardonForm::action() const
{
    std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}