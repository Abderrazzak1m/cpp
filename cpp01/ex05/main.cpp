/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 03:07:13 by amiski            #+#    #+#             */
/*   Updated: 2022/11/12 03:46:21 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"

int main()
{
    Harl a;
    a.info();
    a.debug();
    a.warning();
    a.error();

    std::cout <<"-------------------------------------------"<< std::endl;

    a.complain("INFO");
    a.complain("DEBUG");
    a.complain("WARNING");
    a.complain("ERROR");
}