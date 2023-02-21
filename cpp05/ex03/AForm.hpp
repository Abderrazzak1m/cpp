/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 17:28:30 by amiski            #+#    #+#             */
/*   Updated: 2022/11/24 17:48:51 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP
#include<iostream>
#include"Bureaucrat.hpp"
#include <exception>
#include <fstream>
class Bureaucrat;
class AForm
{
    protected:
        const std::string name;
        bool is_signed;
        const int grade_to_sign;
        const int grade_to_exec;
    public:
        AForm( std::string name = "form", int grade_to_sign = 1 , int grade_to_exec = 2);
        AForm(const AForm& obj);
        AForm& operator=( const AForm& obj);
        virtual ~AForm();
        void beSigned(const Bureaucrat& obj);
        class GradeTooHighException:public std::exception
        {
            public:
                const char* what() const throw();
        };
        
        class GradeTooLowException:public std::exception
        {
            public:
                const char* what() const throw();
        };
        std::string getName() const;
        virtual void action() const  = 0;
        int getIsigned() const;
        int getGrades() const;
        int getGradex() const;
        void execute(Bureaucrat const & executor) const ;
};

std::ostream& operator<< (std::ostream& os, const AForm& obj);

#endif