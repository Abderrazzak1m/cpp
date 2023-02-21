/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 04:55:04 by amiski            #+#    #+#             */
/*   Updated: 2022/11/28 07:09:50 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANSTACK_HPP
# define MUTANSTACK_HPP
#include <iostream>
#include <vector>
#include <deque>
#include <stack>
#include<list>

template <typename T, typename Container= std::deque <T> >
class MutantStack:public std::stack<T, Container>
{
    public:
        MutantStack()
        {
            
        }
        MutantStack(const MutantStack& obj)
        {
            *this = obj;
        }
        ~MutantStack()
        {
            this->c.clear();
        }
        
        MutantStack& operator=(const MutantStack& obj)
        {
            if(this != &obj)
                this->c = obj.c;
            return *this;
        }
        
        typedef typename Container::iterator iterator;
        iterator begin()
        {
            return(this->c.begin());
        }
        
        iterator end()
        {
            return(this->c.end());
        }
};

#endif