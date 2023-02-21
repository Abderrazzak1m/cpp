/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 00:31:30 by amiski            #+#    #+#             */
/*   Updated: 2022/11/28 07:09:02 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span():n(0){}

Span::Span(unsigned int n):n(n){}

Span::~Span(){}

Span::Span(const Span& obj)
{
    *this = obj;
}

Span& Span::operator=(const Span& obj)
{
    if(this != &obj)
    {
        this->numbers = obj.numbers;
        this->n = obj.n;
    }
    return(*this);
}

void Span::addNumber(unsigned int n)
{
    if(this->numbers.size() >= this->n)
        throw std::out_of_range("out of range");
    this->numbers.push_back(n);
}

int Span::shortestSpan()
{
    std::vector<int> tmp;
    tmp = this->numbers;
    if(tmp.size() == 0)
        throw std::out_of_range("no numbers stored");
    else if(tmp.size() == 1)
        throw std::out_of_range("only one numbers");
    std::sort(tmp.begin(), tmp.end());
    int shortest = *(tmp.begin() + 1) - *tmp.begin();
    for(std::vector<int>::iterator it = tmp.begin(); it != tmp.end();it++)
    {
        if((it + 1) == tmp.end())
            break ;
        if((*(it + 1) - *it) < shortest) 
            shortest = *(it + 1) - *it;
    }
    return(shortest);
}

int Span::longestSpan()
{
    std::vector<int> tmp;
    tmp = this->numbers;
    if(tmp.size() == 0)
        throw std::out_of_range("no numbers stored");
    else if(tmp.size() == 1)
        throw std::out_of_range("only one numbers");
    std::sort(tmp.begin(), tmp.end());
    int longest = *(tmp.end() - 1) - *tmp.begin();
    return(longest);
}

void Span::addrange(std::vector<int>::iterator first, std::vector<int>::iterator last)
{
    if(this->numbers.size() + std::distance(first, last) > this->n)
        throw std::out_of_range("span is full");
    this->numbers.insert(this->numbers.end(), first, last); 
}