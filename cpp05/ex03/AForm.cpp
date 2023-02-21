/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 18:00:55 by amiski            #+#    #+#             */
/*   Updated: 2022/11/24 01:19:46 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"AForm.hpp"

/*-------------------------------------------Canonical Form--------------------------------------------------*/
AForm::AForm(std::string name, int grade_to_sign, int grade_to_exec):name(name), grade_to_sign(grade_to_sign), grade_to_exec(grade_to_exec)
{
    this->is_signed = false;
}

AForm::AForm(const AForm& obj):name("form"), grade_to_sign(1), grade_to_exec(2)
{
    if(this != &obj)
        *this = obj;
}

AForm& AForm::operator=(const AForm& obj)
{
    if(this != &obj)
    {
        this->is_signed = obj.is_signed;
    }
    return(*this);
}

AForm::~AForm()
{
    
}
/*---------------------------geters-----------------------------*/
std::string AForm::getName()const
{
    return(this->name);
}

int AForm::getIsigned() const
{
    return(this->is_signed);
}
int AForm::getGrades() const
{
    return(this->grade_to_sign);
}
int AForm::getGradex() const
{
    return(this->grade_to_exec);    
}
/*----------------------------------------------------------------------*/
void AForm::beSigned(const Bureaucrat& obj)
{
    if(obj.getGrade() <= this->getGrades())
    {
        this->is_signed = true;
    }
    else
        throw(AForm::GradeTooLowException());
}

/*  ??? handeling custom exeption */
void AForm::execute(Bureaucrat const & executor) const
{
    if(executor.getGrade() > this->grade_to_exec || this->is_signed == false)
        throw AForm::GradeTooLowException();
}

std::ostream& operator<< (std::ostream& os, const AForm& obj)
{
    os << obj.getName() << " is_signed : " << obj.getIsigned() << " grade to signe : " << obj.getGrades() << " grade to exec : " << obj.getGradex() << std::endl;
    return(os);
}


/*-----------------------------Exception-------------------------*/

const char *AForm::GradeTooHighException::what() const throw()
{
    return("Grade Too High Exception");
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return("Grade Too Low Exceptione");
}