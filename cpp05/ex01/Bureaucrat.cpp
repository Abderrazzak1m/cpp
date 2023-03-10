/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:59:45 by amiski            #+#    #+#             */
/*   Updated: 2022/11/24 19:11:52 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():name("bureaucrat")
{ 
    this->grade = 150;
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj)
{
    if(this != &obj)
        *this = obj;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj)
{
    if(this != &obj)
    {
        this->grade = obj.grade;
    }    
    return(*this);
}

Bureaucrat::~Bureaucrat()
{
    
}

Bureaucrat::Bureaucrat(const std::string name, int grade)
    : name(name)
{
    if(grade > 150)
        throw(Bureaucrat::GradeTooLowException());
    else if(grade < 1)
        throw(Bureaucrat::GradeTooHighException());
    else
        this->grade = grade;
}

std::string Bureaucrat::getName() const
{
    return(this->name);
}
int Bureaucrat::getGrade()const
{
    return(this->grade);
}

void Bureaucrat::incrGrade()
{
    if(this->getGrade() == 1)
    {
        throw(Bureaucrat::GradeTooHighException());
    }
    else
        this->grade--;
    
}
void Bureaucrat::decrGrade() 
{
    if(this->getGrade() == 150)
    {
        throw(Bureaucrat::GradeTooLowException());
    }
    else
        this->grade++;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj)
{
    os << obj.getName() << ", bureaucrat grade "<< obj.getGrade() ; 
    return(os);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return("Grade Too High Exception");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return("Grade Too Low Exception");
}

void Bureaucrat::signForm(Form& obj) const
{
    try
    {
        obj.beSigned(*this);
    }
    catch(const std::exception& e)
    {
       std::cout << this->getName() << " couldn???t sign  " << obj.getName() << " because "<< e.what() << std::endl;
    }
    
}