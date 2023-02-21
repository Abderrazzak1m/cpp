/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 21:26:10 by amiski            #+#    #+#             */
/*   Updated: 2022/11/24 01:26:58 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include<iostream>

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
};
std::ostream& operator<< (std::ostream& os, const Bureaucrat& obj);

#endif