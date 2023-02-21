/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiski <amiski@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 01:43:48 by amiski            #+#    #+#             */
/*   Updated: 2022/11/12 03:05:55 by amiski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"

void Harl::debug()
{
    std::cout << "[ DEBUG ]"<<std::endl;
    std::cout <<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger."<<std::endl;
    std::cout << "I really do!" <<std::endl<< std::endl;
}
void Harl::info()
{
    std::cout << "INFO"<<std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
    std::cout<< "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" <<std::endl<< std::endl;
}
void Harl::warning()
{
    std::cout << "[ WARNIG ]"<<std::endl;
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
    std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl<< std::endl;
}
void Harl::error()
{
    std::cout << "[ ERROR ]"<<std::endl;
    std::cout <<"This is unacceptable! I want to speak to the manager now."<<std::endl << std::endl;
}

void info(){
    std::cout<<"hi";
}

void Harl::complain(std::string level)
{
     typedef void(Harl::*func)();
     int i;
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    func ls[4]= {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    for(i = 0; i < 4; i++)
    {
        if(level == levels[i])
        {
            switch (i)
            {
                case 0:
                    (this->*(ls[0]))();
                case 1:
                    (this->*(ls[1]))();
                case 2:
                    (this->*(ls[2]))();
                case 3:
                    (this->*(ls[3]))();
                default:
                    return ;  
            }
        }
    }
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
};