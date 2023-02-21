/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 00:31:04 by amiski            #+#    #+#             */
/*   Updated: 2022/11/26 01:13:49 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Classes.hpp"
#include <unistd.h>

int main()
{
    Base *base = generate();
    identify(base);
    A a1;
    A &a = a1;
    identify(a);
    B b1;
    B &b = b1;
    identify(b);
    C c1;
    C &c = c1;
    identify(c);
    delete base;
    //usleep(1200000);
    //identify(generate());
    
}