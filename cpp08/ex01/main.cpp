/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 00:47:27 by amiski            #+#    #+#             */
/*   Updated: 2022/11/28 04:53:37 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Span.hpp"
#include <stack> 
int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    try
    {
        std::cout << sp.shortestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::vector<int> r;
    r.push_back(1);
    r.push_back(2);
    r.push_back(3);
    try
    {
        sp.addrange(r.begin(), r.end());
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return 0;
}