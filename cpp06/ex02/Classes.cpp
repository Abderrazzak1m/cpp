/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Classes.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 00:09:58 by amiski            #+#    #+#             */
/*   Updated: 2022/11/26 00:41:57 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Classes.hpp"

Base::~Base()
{
    
}

A::~A()
{

}

B::~B()
{

}
C::~C()
{
    
}

Base * generate(void)
{
    if(time(NULL) % 3 ==0 )
        return(new A());
    else if(time(NULL) % 3 == 1 )
        return(new B());
    else if(time(NULL) % 3 == 2 )
        return(new C());
    return(NULL);
}

void identify(Base* p)
{
    if(dynamic_cast<A *>(p))
        std::cout << "A" << std::endl;
    else if(dynamic_cast<B *>(p))
        std::cout << "B" << std::endl;
    else if(dynamic_cast<C *>(p))
        std::cout << "C" << std::endl;
    else
        std::cout << "unknown";
}

void identify(Base& p)
{
    try
    {
        A &a = dynamic_cast<A &>(p); 
        std::cout << "A" << std::endl;
        (void)a;
        return ;
    }
    catch(...)
    {
    }
    
    try
    {
        B &b = dynamic_cast<B &>(p); 
        (void)b;
        std::cout << "B" << std::endl;
        return ;
    }
    catch(...)
    {
    }
    
    try
    {
        C &c = dynamic_cast<C &>(p); 
        (void)c;
        std::cout << "C" << std::endl;
        return ;
    }
    catch(...)
    {
        std::cout << "unknown" << std::endl;
    }
    
}