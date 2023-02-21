/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 17:27:18 by amiski            #+#    #+#             */
/*   Updated: 2022/11/24 01:28:01 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include<iostream>
#include"AForm.hpp"
class AForm;
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
        void signForm(AForm& obj) const;
        void executeForm(AForm const & form);
};
std::ostream& operator<< (std::ostream& os, const Bureaucrat& obj);

#endif