/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:49:05 by amiski            #+#    #+#             */
/*   Updated: 2022/11/24 18:17:39 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
#include<iostream>
#include"Bureaucrat.hpp"
class Bureaucrat;
class Form
{
    private:
        const std::string name;
        bool is_signed;
        const int grade_to_sign;
        const int grade_to_exec;
    public:
        Form(std::string name = "form", int grade_to_sign = 1 , int grade_to_exec = 2);
        Form(const Form& obj);
        Form& operator=( const Form& obj);
        ~Form();
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
        int getIsigned() const;
        int getGrades() const;
        int getGradex() const;
};

std::ostream& operator<< (std::ostream& os, const Form& obj);

#endif