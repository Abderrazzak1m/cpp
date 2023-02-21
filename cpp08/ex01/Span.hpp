/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 23:58:55 by amiski            #+#    #+#             */
/*   Updated: 2022/11/28 04:54:28 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
#include<vector>
#include<iostream>
class Span
{
    private:
        std::vector<int> numbers;
        unsigned int n;
    public:
        Span();
        Span(unsigned int n);
        Span(const Span& obj);
        Span& operator=(const Span& obj);
        ~Span();
        void addNumber(unsigned int n);
        int shortestSpan();
        int longestSpan();
        void addrange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
};

#endif