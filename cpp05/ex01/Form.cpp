/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:02:16 by amiski            #+#    #+#             */
/*   Updated: 2022/11/24 19:12:22 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Form.hpp"


Form::Form(std::string name, int grade_to_sign, int grade_to_exec):name(name), grade_to_sign(grade_to_sign), grade_to_exec(grade_to_exec)
{
    this->is_signed = false;
}

Form::Form(const Form& obj):name("form"), grade_to_sign(1), grade_to_exec(2)
{
    if(this != &obj)
        *this = obj;
}

Form& Form::operator=(const Form& obj)
{
    if(this != &obj)
    {
        this->is_signed = obj.is_signed;
    }
    return(*this);
}

Form::~Form()
{
    
}
std::string Form::getName()const
{
    return(this->name);
}
int Form::getIsigned() const
{
    return(this->is_signed);
}
int Form::getGrades() const
{
    return(this->grade_to_sign);
}
int Form::getGradex() const
{
    return(this->grade_to_exec);    
}
void Form::beSigned(const Bureaucrat& obj)
{
    if(obj.getGrade() <= this->getGrades())
    {
        this->is_signed = true;
        std::cout << this->getName() << " signed " << obj.getName() << std::endl; 
    }
    else
        throw(Form::GradeTooLowException());
}
std::ostream& operator<< (std::ostream& os, const Form& obj)
{
    os << obj.getName() << " is_signed : " << obj.getIsigned() << " grade to signe : " << obj.getGrades() << " grade to exec : " << obj.getGradex() << std::endl;
    return(os);
}

const char *Form::GradeTooHighException::what() const throw()
{
    return("Grade Too High Exception");
}

const char *Form::GradeTooLowException::what() const throw()
{
    return("Grade Too Low Exception");
}