/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Classes.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 00:07:36 by amiski            #+#    #+#             */
/*   Updated: 2022/11/26 00:30:54 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CLASSES_HPP
# define CLASSES_HPP
#include <iostream>
// #include <ctime>
class Base
{
    public:
        virtual ~Base();
};

class A:public Base
{
    public:
        ~A();    
};

class B:public Base
{
    public:
        ~B();    
};

class C:public Base
{
    public:
        ~C();    
};

void identify(Base *p);
void identify(Base& p);
Base * generate(void);
#endif