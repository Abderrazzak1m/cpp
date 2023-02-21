/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:59:08 by amiski            #+#    #+#             */
/*   Updated: 2022/11/24 18:16:13 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include<iostream>
#include"Form.hpp"
class Form;
class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat();
        Bureaucrat(const Bureaucrat& obj);
        Bureaucrat& operator=(const Bureaucrat& obj);
        ~Bureaucrat();

        Bureaucrat(const std::string name, int grade);
        std::string getName() const;
        int getGrade() const;
        
        void incrGrade();
        void decrGrade();

        class GradeTooHighException:public std::exception// nested
        {
            public:
                const char* what() const throw();
        };
        class GradeTooLowException:public std::exception
        {
            public:
                const char* what() const throw();
        };
        void signForm(Form& obj) const;
};
std::ostream& operator<< (std::ostream& os, const Bureaucrat& obj);

#endif